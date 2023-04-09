#include "lab4_2D_arrays.h"

void lab4_2D_arrays_main(void) {
	int matrix[2][3] = {
		{2, 4, 6},
		{8, 10, 12}
	};

	/*
	* Accesing just one index of a 2D array returns the address of the fisrt element of the array that starts to be located at that index
	*/
	printf("Printing Memory addresses:\n");
	printf("matrix = 0x%llx\n*matrix = 0x%llx\nmatrix[0] = 0x%llx\n", (unsigned long long)matrix, (unsigned long long) *matrix, (unsigned long long) matrix[0]);
	printf("matrix[1] = 0x%llx\n", (unsigned long long) *(matrix + 1));
	printf("*(matrix + 1) = 0x%llx\n", (unsigned long long) matrix[1]);
	printf("&matrix[1][1] = 0x%llx\n", (unsigned long long) &matrix[1][1]);
	printf("matrix[1] + 2 = 0x%llx\n", (unsigned long long) (*(matrix + 1) + 2));
	printf("matrix[1] + 2 = 0x%llx\n", *(matrix + 1) + 2);
	printf("matrix[1] + 2 = 0x%llx\n", (unsigned long long) matrix[1] + 2);
	printf("matrix[1] + 2 = 0x%llx\n\n", matrix[1] + 2);
	
	/*
	* To get the value stored at one position of the 2D array using just one index, you must dereference operators
	*/
	printf("Printing values:\n");
	printf("**matrix = %d\nmatrix[0][0] = %d\n", **matrix,  matrix[0][0]);
	printf("*(matrix[1]) = %d\n", **(matrix + 1));
	printf("matrix[1][1] = %d\n", *&matrix[1][1]);
	printf("*(matrix[1] + 2) = %d\n", *(*(matrix + 1) + 2));
	printf("matrix[1][2] = %d\n", *(matrix[1] + 2));
	printf("*(*(matrix + 1) + 2) = %d\n", matrix[1][2]);
}