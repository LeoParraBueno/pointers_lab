#include "lab5_multi_dim_array.h"

void lab5_multi_dim_arrays_main(void) {
	
	//Three dimensional array
	int MDA_3D[3][2][2] = {
		{{1, 2}, {3, 4}},
		{{5, 6}, {7, 8}},
		{{9, 10}, {11, 12}}
	};

	//Four dimensional array
	int MDA_4D[3][2][2][2] = {
		{
			{{1, 2}, {3, 4}}, {{11, 12}, {13, 14}}
		},
		{
			{{25, 26}, {27, 28}}, {{35, 36}, {37, 38}}
		},
		{
			{{49, 410}, {411, 412}}, {{59, 510}, {511, 512}}
		}
	};

	//Five dimensional array
	int MDA_5D[2][2][2][2][2] = {
		{
			{
				{{1, 2}, {3, 4}}, {{11, 12}, {13, 14}}
			}, 
			{
				{{21, 22}, {23, 24}}, {{21, 22}, {23, 24}}
			}
		},
		{
			{
				{{31, 32}, {33, 34}}, {{31, 32}, {33, 34}}
			},
			{
				{{41, 42}, {43, 44}}, {{41, 42}, {43, 44}}
			}
		}
	};

	/*
	* Let i be the max dimension of a multi-dimensional array, then accessing just the i dimension 
	* of such a multi-dimentional array returns the address of the first element in the first array 
	* in the dimension 1 at index n; it is &MDA[n]...[z][y][x]
	* 
	*     i     3  2  1
	*     |     |  |  |
	* MDA[n]...[z][y][x]
	*/
	printf("Printing Memory addresses (indexing i dimension):\n");
	printf("MDA_3D:\n");
	printf(
		"MDA_3D = 0x%llx\n*MDA_3D = 0x%llx\nMDA_3D[0] = 0x%llx\nMDA_3D[0][0] = 0x%llx\n", 
		(unsigned long long)MDA_3D, 
		(unsigned long long) *MDA_3D, 
		(unsigned long long) MDA_3D[0], 
		(unsigned long long) MDA_3D[0][0]
	);
	printf("MDA_3D[1] = 0x%llx\n", (unsigned long long) * (MDA_3D + 1));
	printf("MDA_3D[1] = 0x%llx (fail: Wrong way to access this adddress in the implementation)\n", (unsigned long long) * (*MDA_3D + 1));
	printf("*(MDA_3D + 1) = 0x%llx\n", (unsigned long long) MDA_3D[1]);
	printf("MDA_3D[1] + 2 = 0x%llx\n", (unsigned long long) (*(MDA_3D + 1) + 2));
	printf("MDA_3D[1] + 2 = 0x%llx\n", *(MDA_3D + 1) + 2);
	printf("MDA_3D[1] + 2 = 0x%llx  (fail: Wrong pointer arithmetic implementation)\n", (unsigned long long) MDA_3D[1] + 2);
	printf("MDA_3D[1] + 2 = 0x%llx\n\n", MDA_3D[1] + 2);

	printf("MDA_4D:\n");
	printf(
		"MDA_4D = 0x%llx\n*MDA_4D = 0x%llx\nMDA_4D[0] = 0x%llx\nMDA_4D[0][0] = 0x%llx\nMDA_4D[0][0][0] = 0x%llx\n", 
		(unsigned long long)MDA_4D, 
		(unsigned long long) *MDA_4D, 
		(unsigned long long) MDA_4D[0], 
		(unsigned long long) MDA_4D[0][0], 
		(unsigned long long) MDA_4D[0][0][0]
	);
	printf("MDA_4D[1] = 0x%llx\n", (unsigned long long) * (MDA_4D + 1));
	printf("MDA_4D[1] = 0x%llx (fail: Wrong way to access this adddress in the implementation)\n", (unsigned long long) * (*MDA_4D + 1));
	printf("*(MDA_4D + 1) = 0x%llx\n", (unsigned long long) MDA_4D[1]);
	printf("MDA_4D[1][2] = MDA_4D[2][0] = 0x%llx\n", (unsigned long long) MDA_4D[1][2]);
	printf("MDA_4D[1][2] = MDA_4D[2][0] = 0x%llx\n", *(MDA_4D + 1) + 2);
	printf("MDA_4D[2][0] = 0x%llx\n", MDA_4D[2][0]);
	printf("MDA_4D[1] + 2 = 0x%llx\n", (unsigned long long) (*(MDA_4D + 1) + 2));
	printf("MDA_4D[1] + 2 = 0x%llx  (fail: Wrong pointer arithmetic implementation)\n", (unsigned long long) *MDA_4D[1] + 2);
	printf("MDA_4D[1] + 2 = 0x%llx\n\n", MDA_4D[1] + 2);

	printf("MDA_5D:\n");
	printf(
		"MDA_5D = 0x%llx\n*MDA_5D = 0x%llx\nMDA_5D[0] = 0x%llx\nMDA_5D[0][0] = 0x%llx\nMDA_5D[0][0][0] = 0x%llx\nMDA_5D[0][0][0][0] = 0x%llx\n\n",
		(unsigned long long)MDA_5D,
		(unsigned long long) * MDA_5D,
		(unsigned long long) MDA_5D[0],
		(unsigned long long) MDA_5D[0][0],
		(unsigned long long) MDA_5D[0][0][0],
		(unsigned long long) MDA_5D[0][0][0][0]
	);

	/*
	* Let i be the max dimension of a multi-dimensional array and k a integer number
	* with domain 0 <= k < i, then accessing the i - k dimension of such a 
	* multi-dimentional array returns the address of the inner first element in the array 
	* in the dimension i - 1 at index MDA[n]...[x]
	* 
	*     i   i - k
	*     |     |
	* MDA[n]...[x]
	*/
	printf("Printing Memory addresses (indexing i - k dimensions):\n");
	printf("MDA_3D:\n");
	printf("MDA_3D[0][1] = 0x%llx\n", (unsigned long long) * (MDA_3D[0] + 1));
	printf("MDA_3D[0][1] = 0x%llx\n", (unsigned long long) MDA_3D[0][1]);
	printf("&MDA_3D[1][1] = 0x%llx\n", (unsigned long long) & MDA_3D[1][1]);
	printf("MDA_3D[1][1] = 0x%llx\n\n", (unsigned long long) MDA_3D[1][1]);

	printf("MDA_4D:\n");
	printf("MDA_4D[0][1][0] = 0x%llx\n", (unsigned long long) *((*MDA_4D + 1)));
	printf("MDA_4D[0][1][0] = 0x%llx\n", (unsigned long long) **((*MDA_4D + 1)));
	printf("&MDA_4D[1][1] = 0x%llx\n", (unsigned long long) & MDA_4D[1][1]);
	printf("MDA_4D[1][1][1] = 0x%llx\n\n", (unsigned long long) MDA_4D[1][1]);

	/*
	* To get the value stored at one position of the multi-dimensional array using just its name, you must use dereference operators
	*/
	printf("Printing values:\n");
	printf("MDA_3D:\n");
	printf("***MDA_3D = %d\n*MDA_3D[0][0] = %d\n", ***MDA_3D, *MDA_3D[0][0]);
	printf("*(MDA_3D[1][0]) = %d\n", ***(MDA_3D + 1));
	printf("*(MDA_3D[1][0]) = %d\n", *(MDA_3D[1][0]));
	printf("MDA_3D[0][1][0] = 0x%llx\n", (unsigned long long) *MDA_3D[0][1]);
	printf("MDA_3D[1][1][1] = %d\n", *(&MDA_3D[1][1][0] + 1));
	printf("**(MDA_3D[1] + 2) = %d\n", *(*(MDA_3D + 1) + 2)[0]);
	printf("MDA_3D[1][2][0] = %d\n", **(MDA_3D[1] + 2));
	printf("MDA_3D[2][0][0] = %d\n", MDA_3D[1][2][0]);
	printf("*(**(*(MDA_3D + 1) + 2) + 1) = %d\n", MDA_3D[1][2][1]);
	printf("MDA_3D[2][0][1] = %d\n", *(*MDA_3D[2] + 1));
	printf("*(*(MDA_3D + 2))[1] = %d\n\n", *(*(MDA_3D + 2))[1]);

	printf("Passing multi-dimensional arrays as function parameters:\n");
	passing_3D_array(MDA_3D);
	passing_4D_array(MDA_4D);
	passing_5D_array(MDA_5D);

	/*
	* All this functions calls will produce a compilation error
	*/
	//passing_3D_array_2(MDA_3D);
	//passing_4D_array_2(MDA_4D);
	//passing_5D_array_2(MDA_5D);
}

void passing_3D_array(int ptr[][2][2]){
	printf("printing from 'passing_3D_array' -> ptr[2][1][1] = %d\n", ptr[2][1][1]);
}
void passing_4D_array(int ptr[3][2][2][2]){
	printf("printing from 'passing_4D_array' -> ptr[1][1][1][1] = %d\n", ptr[1][1][1][1]);
}
void passing_5D_array(int ptr[2][2][2][2][2]){
	printf("printing from 'passing_5D_array' -> ptr[1][0][1][0][1] = %d\n", ptr[1][0][1][0][1]);
}

/*
* All these functions definitions sintax won't work when passing multi-dimensional array
*/
void passing_3D_array_2(int*** ptr){
	printf("printing from 'passing_3D_array_2' -> ptr[2][1][1] = %d\n", ptr[2][1][1]);
}
void passing_4D_array_2(int**** ptr){
	printf("printing from 'passing_4D_array_2' -> ptr[1][1][1][1] = %d\n", ptr[1][1][1][1]);
}
void passing_5D_array_2(int***** ptr){
	printf("printing from 'passing_5D_array_2' -> ptr[1][0][1][0][1] = %d\n", ptr[1][0][1][0][1]);
}