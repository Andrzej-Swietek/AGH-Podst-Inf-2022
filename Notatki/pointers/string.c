#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int length_arr(const char*);
int length_ptr(const char*);
int length_ptr_compact(const char*);
int length_ptr_arith(const char*);
int string_comp(char*, char*);
char* string_copy(char*, char*);

int main(void) {

	char text[] = "abcde";
	char text1[10];

	printf("\n");
	printf("text = %s\n", text);
	printf("length_arr = %d\n", length_arr(text));
	printf("length_ptr = %d\n", length_ptr(text));
	printf("length_ptr_compact = %d\n", length_ptr_compact(text));
	printf("length_ptr_arith = %d\n", length_ptr_arith(text));
	printf("strlen (system library) = %d\n", (int)strlen(text));
	printf("strlen(text+2) = %d\n", (int)strlen(text+2));
	printf("\n");

	string_copy(text1, text);
	printf("string_copy (text1, text)\n");
	printf("text1 = %s\n", text1);
	printf("\n");

    text1[0] = '\0';
    printf("text1 = %s\n", text1);
    strcpy(text1, text);
    printf("strcpy (text1, text) - system library \n");
    printf("text1 = %s\n", text1);
    printf("\n");

	text1[0] = '\0';
	strncpy(text1, text, 3);
	text1[3] = '\0';	//	strncpy does not produce null byte
	printf("strncpy (text1, text, 3) - system library \n");
	printf("text1 = %s\n", text1);
	printf("\n");

	char *td = strdup(text);
	printf("strdup (text) - system library \n");
	printf("td = %s\n", td);
	printf("\n");
	free(td);	//	strdup allocates memory

	td = strndup(text, 2);
	printf("strndup (text, 2) - system library \n");
	printf("td = %s\n", td);
	printf("\n");
	free(td);

	strcpy(text1, text);
	printf("text = %s\n", text);
	printf("text1 = %s\n", text1);
	printf("string_comp(text, text1) = %d\n", string_comp(text, text1));
	printf("strcmp(text, text1) = %d\n", strcmp(text, text1));
	printf("\n");

	text1[2] = 'x';
	printf("text = %s\n", text);
	printf("text1 = %s\n", text1);
	printf("string_comp(text, text1) = %d\n", string_comp(text, text1));
	printf("strcmp(text, text1) = %d\n", strcmp(text, text1));
	printf("\n");
	return 0;
}

int length_arr(const char *s) {
	int n;
	for (n = 0; s[n] != '\0'; n++);
	return (n);
}

int length_ptr(const char *s) {
	int n;
	for (n = 0; *s != '\0'; s++, n++);
	return (n);
}

int length_ptr_compact(const char *s) {
	int n=0;
	while (*s++) n++;
	return (n);
}

int length_ptr_arith(const char *s) {
	const char *p = s;
	while (*p) p++;
	return (int)(p-s);
}

char *string_copy(char *s, char *t) {
	char *begin = s;
	while ((*s++ = *t++));
	return begin;
}

int string_comp(char *s, char *t) {
	for ( ;*s == *t; s++, t++)
		if (*s == '\0') return 0;
	return *s - *t;
}

