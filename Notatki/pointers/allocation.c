#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <error.h>
#include "print_and_flush.h"

void reverse(int*, int);
void print_array(int*, int);

int main(void) {

	int* int_ptr = (int*) malloc(sizeof(int));	//	allocate space for an int
	if(!int_ptr) error(1, errno, "alloc() failed."); // calls exit(1)
	*int_ptr = 1001;	//	store a value there
	printf("\n");
	printf("int value = %d: location = %p\n", *int_ptr, int_ptr);
	printf("size of int_ptr = %zu: size of *int_ptr = %zu\n",
        sizeof(int_ptr), sizeof(*int_ptr));
	free(int_ptr);

	double* double_ptr = (double*)malloc(sizeof(double));	//	allocate space for a double
	if(!double_ptr) error(1, errno, "alloc() failed.");
	*double_ptr = 10000001.0;	//	store a double there
	printf("\n");
	printf("double value = %f: location = %p\n", *double_ptr, double_ptr);
	printf("size of double_ptr = %zu: size of *double_ptr = %zu\n",
        sizeof(double_ptr), sizeof(*double_ptr));
	free(double_ptr);

	int *ptr_to_array, dim;
	printf("\n");
	print_and_flush("Enter array size");
	scanf("%d", &dim);

    //	allocate integer array of size N
    ptr_to_array = (int*) malloc(dim * sizeof(int));
	if(!ptr_to_array) error(1, errno, "alloc() failed.");
	printf("\n");
	for (int i = 0; i < dim; i++) ptr_to_array[i] = i + 3;
    print_array(ptr_to_array, dim);
	printf("\n");
    reverse(ptr_to_array, dim);
    print_array(ptr_to_array, dim);

	// free memory
	free(ptr_to_array);
	return 0;
}

void print_array(int* ptr, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void reverse(int* pa, int n) {
	int i, j, t;
	for (i = 0, j = n-1; i < j; i++, j--) {
		t = pa[i];
		pa[i] = pa[j];
		pa[j] = t;
	}
}
