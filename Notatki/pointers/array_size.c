#include <stdio.h>
#define N 5

void print1(int*, int);
void print2(int[N], int);

int main(void) {
	int arr[N];
	for (int i = 0; i < N; i++) arr[i] = 2 * i;
	printf("\n");
	printf("sizeof(arr) = %zu\n", sizeof(arr));
	printf("sizeof(arr) / sizeof(int) = %zu\n", sizeof(arr) / sizeof(int));
	printf("\n");
	print1(arr, N);
	print2(arr, N);
	return 0;
}

void print1(int *t, int n) {
	printf("print1(int *t)\n");
	printf("sizeof(t) = %zu\n", sizeof(t));
	for (int i = 0; i < n; i++)
		printf("t[%d] = %d\n", i, t[i]);
	printf("\n");
}

void print2(int t[N], int n) {
	printf("print2(int t[N])\n");
	printf("sizeof(t) = %zu\n", sizeof(t));
	for (int i = 0; i < n; i++)
		printf("t[%d] = %d\n", i, t[i]);
	printf("\n");
}
