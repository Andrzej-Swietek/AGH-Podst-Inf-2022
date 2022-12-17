#include <stdio.h>

//	This is a perfect example of undefined behavior. Which means that the
//	behaviour of such code is not defined in the C Language, and the output can
//	be anything, the program can print the old value of local it can print
//	garbage, the program can crash.

//	The value of a pointer becomes indeterminate when the object it points to
//	(or just past) reaches the end of its lifetime. local is automatic,
//	therefore its lifetime will end whenever the block in which it is defined
//	ends, which is actually the end of function return_local_address(). The local variables is
//	allocated in the stack frame created for the function return_local_address(). Whenever the
//	function returns, the current active stack frame becomes the stack frame of
//	the calling function (main(), in this case), and the stack frame area of
//	return_local_address() is no more allocated

int return_local() {
	int local = 1;
	printf("in return_local() = %d (%p)\n", local, (void*)&local);
	return local;
}

int* return_local_address() {
	int local = 2;
	printf("in return_local_address() = %d (%p)\n", local, (void *) &local);
	return &local;
}

int main(void) {
	printf("\n");
	printf("return_local() = %d\n", return_local());
	printf("--------------\n");
	int* p = return_local_address();
	printf("return_local_address() = %p\n", (void*)p);
	if(p) printf("return_local_address() = %d\n", *p);
	printf("\n");
	return 0;
}

