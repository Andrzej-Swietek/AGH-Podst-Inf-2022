#include <stdio.h>
#include <stdlib.h>
#include <errno.h>      //      perror
#include <error.h>      //      error

int main() {
	const long max = 1000000000;
	int *big;
	for (int i = 0; ; i++) {
		big = (int*) malloc(max*sizeof(int));
		if(!big) error(1, errno, "malloc() failed");
		printf("%d allocated\n", i+1);
	}
	return 0;
}

