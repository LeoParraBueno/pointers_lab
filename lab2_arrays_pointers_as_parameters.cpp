#include "lab2_arrays_pointers_as_parameters.h"

void lab2_arrays_pointers_as_parameters_main(void) {
    
    int A[5] = { 1, 2, 3, 4, 5 };

    /*
    * Here:
    * sizeof(A) will return the size in bytes of the whole allocated memory for the array A and
    * sizeof(A[0]) will return the size of a single integer value (int) that for this machine arch is 4 bytes
    */
    printf("Array A:\nsize of A = %llu\nsize of A[0] = %llu\n\n", sizeof(A), sizeof(A[0]));
    arrayPassing(A);
    arrayPassing_2(A);
}

void arrayPassing(int A[]) {
    /*
    * Here:
    * sizeof(A) will return the size of a pointer to an integer (int *) that for this machine is 8 bytes, and
    * sizeof(A[0]) will return the size of an integer value (int) that for this machine arch is 4 bytes
    */
    printf("ArrayPassing:\nsize of A = %llu\nsize of A[0] = %llu\n\n", sizeof(A), sizeof(A[0]));
}

void arrayPassing_2(int* A)
{
    /*
    * Here:
    * sizeof(A) will return the size of a pointer to an integer (int *) that for this machine is 8 bytes, and
    * sizeof(A[0]) will return the size of an integer value (int) that for this machine arch is 4 bytes
    */
    printf("ArrayPassing_2:\nsize of A = %llu\nsize of A[0] = %llu\n\n", sizeof(A), sizeof(A[0]));
}