#include <stdio.h>
#include <string.h>

void square(double), cube(double);

int main(int argc, char *argv[]) {
	printf("\n");
	printf("program name : %s\n", *argv);
	printf("\n");
	double x = 5.;

	// find last '/' in file name
	char* ptr = strrchr(*argv, '/');
	if (ptr == NULL) ptr = *argv;
	else ++ptr;

	if(!strcmp(ptr, "program_name")) square(x);
	else cube(x);
	return 0;
}

void square(double x) {
	printf("%f^2 = %f\n", x, x*x);
	printf("\n");
}

void cube(double x) {
	printf("%f^3 = %f\n", x, x*x*x);
	printf("\n");
}

