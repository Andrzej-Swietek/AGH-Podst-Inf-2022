#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//	in C const declarations do not produce constant expressions, i.e. in C you
//	can't use a const int object in a case label, as a bit-field width or as
//	array size 

#define N 5

int main(void) {
    srand48(time(NULL));

	int arr[N];
	for (int i = 0; i < N; i++) arr[i] = (int) (lrand48() % 100);
	printf("\n");

	printf("Array version\n");
	printf("\n");
	for (int i = 0; i < N; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
	printf("\n");

	printf("Pointer version\n");
	printf("\n");
	for (int i = 0; i < N; i++)
		printf("arr[%d] = %d\n", i, *(arr+i));
	printf("\n");

	printf("Another pointer version\n");
	printf("\n");
	for (int *pa = arr; pa < arr + N; pa++)
		printf("arr[%ld] = %d\n", pa-arr, *pa);
	return 0;
}

