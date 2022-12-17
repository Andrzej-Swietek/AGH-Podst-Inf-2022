#include <stdio.h>
#include <math.h>

void tabulate (double(*f)(double), double, double, double);
double some_function(double x) { return 1 / (1 + x * x); }

int main(void) {
	printf("\n");
	printf("Tabulate sin():\n");
	printf("-------------------\n");
	tabulate (sin, 0.0, M_PI, M_PI/10);
	printf("\n");
	printf("Tabulate exp():\n");
	printf("-------------------\n");
	tabulate (exp, 0.0, 1.0, 0.1);
	printf("\n");
	printf("Tabulate some_function():\n");
	printf("---------------------\n");
    tabulate(some_function, 0.0, 1.0, 0.1);
	printf("\n");
}

void tabulate (double (*f)(double), double lower, double upper, double incr) {
	double x;
	for (x = lower; x < upper; x += incr)
		printf("%6.4f%10.4f\n", x, f(x));
	printf("%6.4f%10.4f\n", upper, f(upper));
}

