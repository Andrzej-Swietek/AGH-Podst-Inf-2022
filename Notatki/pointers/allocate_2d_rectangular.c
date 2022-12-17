#include <stdio.h>
#include <stdlib.h>
#include <error.h>
#include <errno.h>
#include "print_and_flush.h"

int main(void) {
	int number_of_rows, number_of_columns;
	printf("\n");
	print_and_flush("Enter #rows");
	scanf("%d", &number_of_rows);
	print_and_flush("Enter #columns");
	scanf("%d", &number_of_columns);

	// allocate vector of pointers to rows
	int **array_2d = (int**)malloc(number_of_rows * sizeof(int*));
	if(!array_2d) error(1, errno, "alloc() failed.");
	for (int i = 0; i < number_of_rows; i++) {
	    // allocate i-th row
        array_2d[i] = (int*)calloc(number_of_columns, sizeof(int));
		if(!array_2d[i]) error(1, errno, "alloc() failed.");
		for (int j = 0; j < number_of_columns; j++)
            array_2d[i][j] = number_of_columns * i + j + 1;
	}
	printf("\n");
	for (int i = 0; i < number_of_rows; i++) {
		for (int j = 0; j < number_of_columns; j++)
			printf("%4d ", array_2d[i][j]);
		printf("\n");
	}

	// free memory
	for (int i = 0; i < number_of_rows; i++) free(array_2d[i]);
	free(array_2d);
	return 0;
}

