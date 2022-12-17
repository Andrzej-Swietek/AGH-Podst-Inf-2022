#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("\n");
	printf("Program name: %s\n", *argv);
	printf("\n");
	printf("Arguments:\n");
	while(--argc) printf("\t%s\n", *++argv);
	printf("\n");
	return 0;
}
