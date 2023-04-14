#pragma once
#include <stdio.h>

//Lab 3 main prototype
void lab5_multi_dim_arrays_main(void);

//Complemetary lab prototypes

void passing_3D_array(int[][2][2]);
void passing_4D_array(int[3][2][2][2]);
void passing_5D_array(int[2][2][2][2][2]);

/*
* All these functions prototypes sintax won't work when passing multi-dimensional array
*/
void passing_3D_array_2(int*** ptr);
void passing_4D_array_2(int**** ptr);
void passing_5D_array_2(int***** ptr);