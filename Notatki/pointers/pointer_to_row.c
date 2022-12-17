#include <stdio.h>

int main(void) {
	int mat[3][2] = {{1,2}, {3,4}, {5,6}};
	int (*row)[2] = mat;	//	pointer to array (size 2) of int (row of mat)
	int number_of_rows = sizeof(mat) / sizeof(mat[0]);	//	number of rows

	printf("\n");
	for(int i = 0; i < number_of_rows; ++i)
	    printf("[%d %d]\n", mat[i][0], mat[i][1]);
	printf("\n");

	for(int i = 0; i < number_of_rows; i++) {
		printf("%d (%p): [%d, %d]\n", i, row, (*row)[0], (*row)[1]);
//		or equivalently
//		printf("%d (%p): [%d, %d]\n", i, row, row[0][0], row[0][1]);
		row++;	//	advance to next row (of size 2*sizeof(int))
	}
	printf("\n");
	return 0;
}
