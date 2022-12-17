#include <stdio.h>
#include <stdlib.h>

int global_var = 1;

int main(void) {
	int local_var = 10;
	int* dynamic_var = (int*)malloc(1000 * sizeof(int));
	static int static_var = 1;	//	static

	printf("\n");
	printf("local_var (stack):    %p\n", &local_var);
	printf("dynamic_var (heap):   %p\n", dynamic_var);
	printf("static_var:           %p\n", &static_var);
	printf("global_var:           %p\n", &global_var);
	printf("\n");
	free(dynamic_var);
	return 0;
}
