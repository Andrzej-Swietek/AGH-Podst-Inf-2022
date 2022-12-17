#include <stdio.h>

void print (const int*, int);
void change (int*, int);

int main(void) {
	int arr[] = {1, 2, 3, 4, 5};
	printf("\n");
	print (arr, 5);
	change (arr, 5);
	print (arr, 5);
	printf("\n");
	return 0;
}

void print (const int* a, int dim) {
	for (int i = 0; i < dim; i++) 
		printf("arr[%d] = %d\n", i, a[i]);
	printf("\n");
//	a[2] = 20;
}

void change (int* a, int dim) {
	for (int i = 0; i < dim; i++) 
		a[i] += 100;
}

