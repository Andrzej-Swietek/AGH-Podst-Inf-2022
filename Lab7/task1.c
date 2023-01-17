#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char nap_1[20], nap_2[20];
    if (argc == 3) {
        strncpy(nap_1, argv[1], sizeof(nap_1));
        strncpy(nap_2, argv[2], sizeof(nap_2));
    }
    printf("A --> napis_1 = %s napis_2 = %s\n", nap_1, nap_2);
    char temp[20];                      // będę uzywac strncpy - to załatwi sprawe roznic długosci - mam naadzieje ze o to chodziło
    strncpy(temp, nap_1, sizeof(temp));
    strncpy(nap_1, nap_2, sizeof(nap_1));
    strncpy(nap_2, temp, sizeof(nap_2));
    printf("B --> napis_1 = %s napis_2 = %s\n", nap_1, nap_2);
    return 0;
}
