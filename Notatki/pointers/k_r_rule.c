#include <stdio.h>

int main(void) {

	int a[] = {42, 1, 5, 89, 7};
	int index = 3;

	printf("\n");
	printf("%d\n", a[index]);
	printf("%d\n", *(a + index));
	printf("%d\n", *(index + a));
	printf("%d\n", index[a]);
	printf("\n");

	return (0);
}

