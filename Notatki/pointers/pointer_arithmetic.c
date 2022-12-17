#include <stdio.h>
#define N 4

int main(void) {

	printf("\n");
	char array_of_chars[N];
	printf("array_of_chars      = %p\n", array_of_chars);
	printf("array_of_chars + 1  = %p\n", (void*)(array_of_chars + 1));
	printf("\n");

	int array_of_ints[N];
	printf("array_of_ints      = %p\n", array_of_ints);
	printf("array_of_ints + 1  = %p\n", (void*)(array_of_ints + 1));
	printf("\n");

	double array_of_doubles[N];
	printf("array_of_doubles      = %p\n", array_of_doubles);
	printf("array_of_doubles + 1  = %p\n", (void*)(array_of_doubles + 1));
	printf("\n");

	return 0;
}

