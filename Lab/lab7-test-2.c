#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    printf("Arguments: ");
    for (int i = 0; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    printf("\n");

    char combined_str[1000] = "";
    for (int i = 1; i < argc; i++) {
        strcat(combined_str, argv[i]);
    }
    printf("Combined string: %s\n", combined_str);

    return 0;
}
