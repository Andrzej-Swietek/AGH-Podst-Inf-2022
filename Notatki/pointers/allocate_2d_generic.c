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

	// allocate vector of pointers to rows
	int **arr2d = (int**)malloc(number_of_rows * sizeof(int*));
	if(!arr2d) error(1, errno, "alloc() failed.");
	// allocate vector of rows' lengths
	int *len = (int*) malloc(number_of_rows * sizeof(int));
	if(!len) error(1, errno, "alloc() failed.");

	for (int i = 0; i < number_of_rows; i++) {
		print_and_flush("Enter length of the row");
		scanf("%d", &number_of_columns);
		len[i] = number_of_columns;
		// allocate i-th row
		arr2d[i] = (int*) malloc(number_of_columns * sizeof(int));
		if(!arr2d[i]) error(1, errno, "alloc() failed.");
		for (int j = 0; j < number_of_columns; j++)
			arr2d[i][j] = number_of_columns * i + j + 1;
	}
	printf("\n");
	for (int i = 0; i < number_of_rows; i++) {
		printf("row %d: [ ", i+1);
		for (int j = 0; j < len[i]; j++)
			printf("%d ", arr2d[i][j]);
		printf("]\n");
	}

	// free memory
	for (int i = 0; i < number_of_rows; i++) free(arr2d[i]);
	free(arr2d);
	free(len);
	return 0;
}

