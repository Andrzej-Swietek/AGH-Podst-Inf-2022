#include<stdio.h>
#include<stdlib.h>

# define SIZE 5

//	A wrapper for array to make sure that array is passed by value.
struct ArrayWrapper {
	int arr[SIZE];
};

//	An array is passed by value wrapped in temp
void modify(struct ArrayWrapper temp) {
	int *ptr = temp.arr;
	int i;

	printf("\nIn 'modify()', before modification\n");
	for (i = 0; i < SIZE; ++i)
		printf("%d ", ptr[i]);
	printf("\n");
	for (i = 0; i < SIZE; ++i)
		ptr[i] = 100; // OR *(ptr + i) 
	printf("\nIn 'modify()', after modification\n");
	for (i = 0; i < SIZE; ++i)
		printf("%d ", ptr[i]); // OR *(ptr + i)
}

int main() {
	int i;
	struct ArrayWrapper obj;
	for (i=0; i<SIZE; i++) obj.arr[i] = 10; 
	modify(obj); 
	printf("\n\nIn 'main', after calling modify() \n");
	for (i = 0; i < SIZE; ++i) printf("%d ", obj.arr[i]);
	printf("\n\n");
	return 0;
}

