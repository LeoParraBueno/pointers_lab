#include "lab1_basics.h"

//An unitialized global variable will take the value of 0 when compilation completes; this variable will be placed in the static memory region
static int k;

void lab1_basics_main(void) {

    //An unitialized local variable will take ramdom value that depends on the last value placed in the stack memory space where this variable is located; this variable will be placed in the stack memory region
    int i;

    int n = 3;
    int* p;
    int* p2 = &n;

    p = &i;

    printf("i = %d\nk = %d\nn = %d\n", i, k, n);
    printf("Size of int: %llu\nSize of any pointer for a x64 arch: %llu\nSize of unsigned long long: %llu\n\n", sizeof(int), sizeof(void*), sizeof(unsigned long long));

    printf("Pointer p pointing to = 0x%llx \n", (unsigned long long)p);
    printf("Pointer p2 pointing to = 0x%llx \n", (unsigned long long)p2);

    printf("Value pointed by p = %d\n", *p);
    printf("Value pointed by p2 = %d\n\n", *p2);

    printf("Address at p + 1 = 0x%llx \n", (unsigned long long)(p + 1));
    printf("Address at p2 - 1 = 0x%llx \n", (unsigned long long)(p2 - 1));

    printf("Value pointed by p + 1 = %d\n", *(p + 1));
    printf("Value pointed by p2 - 1 = %d\n\n", *(p2 - 1));
}
