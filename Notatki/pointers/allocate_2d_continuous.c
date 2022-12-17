#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <error.h>
#include <errno.h>
#include "print_and_flush.h"

int main(void) {
	int number_of_rows, number_of_columns;
	printf("\n");
	print_and_flush("Enter #rows");
	scanf("%d", &number_of_rows);
	print_and_flush("Enter #cols");
	scanf("%d", &number_of_columns);

	// allocate memory for the array
	int *arr2d = (int*) malloc(number_of_rows * number_of_columns * sizeof(int));
	if(!arr2d) error(1, errno, "alloc() failed.");

	srand48(time(0));

    //allocate vector of pointers to rows
    int** row_pointer = malloc(number_of_rows * sizeof(int*));
    row_pointer[0] = arr2d;
    for (int i = 1; i < number_of_rows; i++) {
        row_pointer[i] = row_pointer[i - 1] + number_of_columns;
	}

	for (int i = 0; i < number_of_rows; i++) {
		for (int j = 0; j < number_of_columns; j++)
            row_pointer[i][j] = (int) (lrand48() % 100);
	}

	printf("\n");
	for (int i = 0; i < number_of_rows; i++) {
		for (int j = 0; j < number_of_columns; j++)
			printf("%4d ", row_pointer[i][j]);
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < number_of_rows; i++) {
		for (int j = 0; j < number_of_columns; j++)
			printf("%p ", &row_pointer[i][j]);
		printf("\n");
	}

    // free memory
	free(arr2d);
	free(row_pointer);
	return 0;
}
