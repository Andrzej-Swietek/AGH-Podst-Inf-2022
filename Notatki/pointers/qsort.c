#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

//	From the Linux man pages, we have the following declaration for qsort (from
//	stdlib.h):

//	void qsort(void *base, size_t num, size_t size,
//		int(*compar)(const void *, const void *));

//	Note the use of void*s to allow qsort to operate on any kind of data
//	because void* pointers can point to anything.

//	base:	Pointer to the first object of the array to be sorted, converted to a void*.
//	num:	Number of elements in the array pointed by base.
//	size:	Size in bytes of each element in the array.
//	compar:	Pointer to a function that compares two elements.

//	But what we're really interested in is the compar argument to qsort: it's a
//	function pointer that takes two void *s and returns an int. This allows
//	anyone to specify how to sort the elements of the array base without having
//	to write a specialized sorting algorithm. Note, also, that compar returns an
//	int; the function pointed to should return negative value if the first
//	argument is less than the second, 0 if they are equal, or positive value if
//	the second is less than the first.

int incr_sorter(const void* first_arg, const void* second_arg) {
	int first = *(int*)first_arg;
	int second = *(int*)second_arg;
	return first - second;
}

int decr_sorter(const void* first_arg, const void* second_arg) {
	int first = *(int*)first_arg;
	int second = *(int*)second_arg;
	return second - first;
}

void print(int* array, int n) {
    for(int i = 0; i < n; ++i) {
        printf ("%d ", array[i]);
    }
    printf("\n");
    printf("\n");
}

int main(void) {
	int array[N];
	srand48(time(0));
	printf("\n");
	for(int i = 0; i < N; ++i) {
		array[i] = (int) (lrand48() % 100);
	}
	print(array, N);

	qsort(array, N , sizeof(int), incr_sorter);
	print(array, N);

	qsort(array, N , sizeof(int), decr_sorter);
    print(array, N);
	return 0;
}

