#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LINES 200

void print(char**);
void free_memory(char**);
void free_and_null(char**);

int main(void) {
	char* lines[MAX_LINES] = { NULL };
	size_t l = 0;
	int n = 0;

	//	size_t getline(char **lineptr, size_t *n, FILE *stream);
	//	If *lineptr is set to NULL and *n is set 0 before the call, then
	//	getline() will allocate a buffer for storing the line.  This buffer
	//	should be freed by the user program even if getline() failed.
	//	returns -1 on failure to read a line (including end-of-file condition).

	printf("\n");
	while (n < MAX_LINES - 1 && getline(lines + n++, &l, stdin) != -1);
	printf("%d lines read\n", n);
	free_and_null(lines + n - 1);	//	free last line (allocated when getline() failed)
	print(lines);
	free_memory(lines);

	return 0;
}

void print(char** lines) {
	printf("-------------------------------------\n\n");
	while(*lines) printf("%s", *lines++);
}

void free_memory(char** lines) {
	while(*lines) free_and_null(lines++);
}

void free_and_null(char** p) {
	free(*p);
	*p = NULL;
}

