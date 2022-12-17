#include <stdio.h>
#define ROWS 3
#define COLUMNS 4

int main (void) {
	int arr2d[ROWS][COLUMNS];
	printf("\n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			arr2d[i][j] = COLUMNS * i + j;
			printf("%3d", arr2d[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%p ", &arr2d[i][j]);
        }
        printf("\n");
    }
	printf("\n");

	for (int i = 0; i < ROWS * COLUMNS; i++)
		printf("%d, ", *((int*)arr2d + i));
	printf("\n");

	return 0;
}

