#include <stdio.h>
#include <string.h>

int main() {
    char main_str[100], sub_str[100];

    printf("Enter main string: ");
    scanf("%s", main_str);

    printf("Enter substring to remove: ");
    scanf("%s", sub_str);

    char *occurrence = strstr(main_str, sub_str);
    while (occurrence != NULL) {
        char *temp = occurrence + strlen(sub_str);
        strcpy(occurrence, temp);
        occurrence = strstr(main_str, sub_str);
    }

    printf("String after removing substring: %s\n", main_str);
    return 0;
}
