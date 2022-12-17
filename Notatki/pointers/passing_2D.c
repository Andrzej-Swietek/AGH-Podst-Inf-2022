#include <stdio.h>
#define N 5

void func1(int[][N], int, int);
void func2(int(*)[N], int, int);
void func3(const int*, int, int, int);
void func4(int**, int, int, int, int*[]);
void func5(int*[N], int, int, int, int*[]);
void set_row_addresses(int[][N], int*[], int);

int main(void) {
	int n = 4;
	int mat[N][N];
	int* rows[N]; // pointers to rows
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			mat[i][j] = i*10 + j;
		}
	}
	printf("\n");
	printf(" Array initialized to: ");
	for(int i = 0; i < n; i++) {
		printf("\n");
		for(int j = 0; j < n; j++) {
//	For integer specifiers (d, i, o, u, x, X): precision specifies the minimum
//	number of digits to be written. If the value to be written is shorter than
//	this number, the result is padded with leading zeros.
			printf("%5.2d", mat[i][j]);
		}
	}
	printf("\n");
	func1(mat, n, n);
	func2(mat, n, n);
	func3((int*)mat, N, n, n);
	func4((int**)mat, N, n, n, rows);
	func5((int**)mat, N, n, n, rows);
	printf("\n");
	return 0;
}

void set_row_addresses(int mat[][N], int* rows[], int n) {
	rows[0] = (int*) mat;
	for (int i = 1; i < n; i++)
		rows[i] = rows[i-1] + n;
}

/* 
 *	Method #1
 *	You don't have to specify the first dimension!
 */

void func1(int mat[][N], int r, int c) {
	printf("\n");
	printf(" Declare as matrix, explicitly specify second dimension: ");
	for(int i = 0; i < r; i++) {
		printf("\n");
		for(int j = 0; j < c; j++) {
			printf("%5.2d", mat[i][j]);
		}
	}
	printf("\n");
}

/*
 *	Method #2
 *	Pointer to array, second dimension is explicitly specified.
 *	The declaration int (*mat)[N] says that mat is a pointer
 *	to an array of 'N' ints.
 */

void func2(int (*mat)[N], int r, int c) {
	printf("\n");
	printf(" Declare as pointer to row, explicitly specify 2nd N: ");
	for(int i = 0; i < r; i++) {
		printf("\n");
		for(int j = 0; j < c; j++) {
			printf("%5.2d", mat[i][j]);
		}
	}
	printf("\n");
}

/*
 *	Method #3
 *	Using a single pointer, the array is "flattened"
 *	With this method you can create general-purpose routines.
 *	The dimensions doesn't appear in any declaration, so you 
 *	can add them to the formal argument list. 
 *
 *	The manual array indexing will probably slow down execution.
 */

void func3(const int *mat, int n, int r, int c)	{
	// n has to be equal to the array's second dimension (as defined in main()
	printf("\n");
	printf(" Declare as single-pointer, manual offset computation: ");
	for(int i = 0; i < r; i++) {
		printf("\n");
		for(int j = 0; j < c; j++) {
			printf("%5.2d", *(mat + n * i + j));
		}
	}
	printf("\n");
}

/*
 *	Method #4 (double pointer, using an auxiliary array of pointers).
 *	With this method you can create general-purpose routines,
 *	if you allocate "index" at run-time. 
 *
 *	Add the dimensions to the formal argument list.
 */

void func4(int **mat, int n, int r, int c, int* rows[]) {
	set_row_addresses((int(*)[n])mat, rows, n);
	printf("\n");
	printf(" Declare as double-pointer, use auxiliary pointer array: ");
	//	from now on use index instead of mat
	for(int i = 0; i < r; i++) {
		printf("\n");
		for(int j = 0; j < c; j++) {
			printf("%5.2d", rows[i][j]);
		}
	}
	printf("\n");
}

/*
 *	Method #5 (single pointer, using an auxiliary array of pointers)
 */

void func5(int *mat[N], int n, int r, int c, int* rows[]) {
	set_row_addresses((int(*)[n])mat, rows, n);
	printf("\n");
	printf(" Declare as single-pointer, use auxiliary pointer array: ");
	for(int i = 0; i < r; i++) {
		printf("\n");
		for(int j = 0; j < c; j++) {
			printf("%5.2d", rows[i][j]);
		}
	}
	printf("\n");
}

