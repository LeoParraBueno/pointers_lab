#include "lab3_character_arrays_and_pointers.h"

void lab3_character_arrays_and_pointers_main(void) {

	char name[3] = { 'L', 'E', 'O' };
	char verb[] = { 'R', 'U', 'L', 'E', 'S', '\0' };
	char place[5] = "HERE";

	/*The following declarations will give compilation errors*/
	//char animal[4] = "alligator";
	//char building[23];
	//building = "House";
	//char* date_ptr = "Today"; //in C the compiler allowas this but in C++ not, you maus use the const keyword to declare a char pointer like this

	const char* thing = "Ball";
	char greeting[] = "Hello";
	char* greetting_ptr = greeting;

	*(greetting_ptr + 1) = 'o';
	greetting_ptr[3] = 'a';
	greetting_ptr[4] = '\0';

	/*The following expressions will give compilation errors*/
	//thing[1] = 'e'; //It gives an error because the 'thing' char pointer was allocated in the code memory as a constant
	//greeting = greetting_ptr;
	//greetting = greeting + 1;

	printf("Printing NULL character as char and int: %c -> %d\n\n", '\0', '\0');

	printf("Printing character array without NULL character: %s\n", name);
	printf("Printing character arrays with NULL character: %s %s\n\n", verb, place);

	printf("Variable 'name' string length (without NULL character): %llu\n", strlen(name));
	printf("Variable 'verb' string length (with NULL character): %llu\n\n", strlen(verb));

	printf("'greetting_ptr' points to address: 0x%llx and the value stored there is %c\n", (unsigned long long)greetting_ptr, *greetting_ptr);
	printf("'greetting_ptr + 1' point to: 0x%llx and the value stored there is %c\n", (unsigned long long)greetting_ptr + 1, greetting_ptr[1]);
	printf("'greetting_ptr + 2' point to: 0x%llx and the value stored there is %c\n", (unsigned long long)greetting_ptr + 2, *(greetting_ptr + 2));
	printf("'greetting_ptr + 3' point to: 0x%llx and the value stored there is %c\n", (unsigned long long) &greetting_ptr[3], greetting_ptr[3]);
	printf("'greetting_ptr + 4' point to: 0x%llx and the value stored there is %c\n", (unsigned long long) &*(greetting_ptr + 4), *(greetting_ptr + 4));
	printf("'greetting_ptr + 5' point to: 0x%llx and the value stored there is %c\n", (unsigned long long) &greetting_ptr[5], greetting_ptr[5]);
	printf("'greetting_ptr + 6' point to: 0x%llx and the value stored there is %c\n\n", (unsigned long long)greetting_ptr + 6, *(greetting_ptr + 6));

	printf("Variable 'greeting' was modified through pointer 'greetting_ptr': %s\n", &greeting);

	printf("Printing 'greetting' traversing the 'greetting_ptr' pointer: ");
	for (size_t i = 0; i < strlen(greeting); i++)
	{
		//greetting_ptr += i; //Bug: pointer will be incremented in an exponential manner (i = 0,1,2,3);
		
		printf("%c", *greetting_ptr);
		greetting_ptr++;
	}
	printf("\nNow 'greetting_ptr' points to: 0x%llx\n", (unsigned long long)greetting_ptr);
	printf("Reseting 'greetting_ptr' and calling 'lab3_print' with 'greetting_ptr' passed as parameter...\n");
	greetting_ptr = greeting;
	printf("Printing 'greetting' traversing pointer 'ptr' at 'lab3_print': ");
	lab3_print(greetting_ptr);
	printf("\nNow 'greetting_ptr' points to: 0x%llx\n\n", (unsigned long long)greetting_ptr);

	//Alternative 1
	pointer_to_constant(greeting);
	constant_pointer(greeting);
	constant_pointer_to_a_constant(greeting);
	//Alternative 2
	pointer_to_constant(greetting_ptr);
	constant_pointer(greetting_ptr);
	constant_pointer_to_a_constant(greetting_ptr);
}

void lab3_print(char* ptr) {
	/*
	* Here:
	* A copy of the pointer is created when passed to the function, so the original pointer is not modified
	* as you can analyze
	*/
	while (*ptr != '\0')
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\nThe local pointer 'ptr' at 'lab3_print' finish pointing to: 0x%llx\n", (unsigned long long)ptr);
}

void pointer_to_constant(const char* ptr) {
	
	//The following line of code is allowed (compilation error)
	//*ptr = 'j';

	//The following line of code is not allowed
	ptr++;

	printf("Printing value as a constant using a pointer: %s\n", ptr);
}

void constant_pointer(char* const ptr) {

	//The following line of code is allowed
	*ptr = 'j';

	//The following line of code is not allowed (compilation error)
	//ptr++;

	printf("Printing value using a constant pointer: %s\n", ptr);
}

void constant_pointer_to_a_constant(const char* const ptr) {
	
	//The following lines of code are not allowed
	//*ptr = 'j';
	//ptr++;

	printf("Printing value as a constant using a constant pointer: %s\n", ptr);
}