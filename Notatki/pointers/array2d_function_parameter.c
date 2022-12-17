#include <stdio.h>
#define ROWS 3
#define COLUMNS 4

void set(int[][COLUMNS]);
void print1(int[][COLUMNS]);
void print2(const int*, int);

int main(void) {
	int arr2d[ROWS][COLUMNS];
	set(arr2d);
	printf("\n");
	print1 (arr2d);
	printf("\n");
	print2 ((int*)arr2d, ROWS * COLUMNS);
	return 0;
}

void set(int arr2d[][COLUMNS]) {
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLUMNS; j++)
			arr2d[i][j] = COLUMNS * i + j;
}

void print1(int arr2d[][COLUMNS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			printf("%d ", arr2d[i][j]);
		}
		printf("\n");
	}
}

void print2(const int *pa, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", *(pa+i));
	}
	printf("\n");
}

