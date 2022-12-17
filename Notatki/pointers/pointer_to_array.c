#include <stdio.h>
#define N 4

int main(void) {
    int *p;        // Pointer to an integer
    int arr[N];
    int (*ptr)[N]; // Pointer to an array of N integers

	p = arr;       // Points to 0th element of the arr.
	ptr = &arr;    // Points to the whole array arr.

	printf("p = %p, ptr = %p\n", p, ptr);
	p++;
    ptr++;
    printf("p = %p, ptr = %p\n", p, ptr);
	return 0; 
} 

