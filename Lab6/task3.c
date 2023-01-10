#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <assert.h>

#define N 20

void remove_char(char* str, char c) {
    char* p = str;
    while (*str) {
        if (*str != c) {
            *p++ = *str;
        }
        str++;
    }
    *p = '\0';
}

char getRandomLetter() {
    return 'a' + rand() % 26;  
}

int main(int argc, char* argv[]) {

    if (argc != 2) {
        printf("Niepoprawna liczba argumentow.\n");
        return 1;
    }

    char c = argv[1][0];
    char losuj_wyraz[N + 1];

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        losuj_wyraz[i] = getRandomLetter();
    }
    losuj_wyraz[N] = '\0';
    printf("Wylosowany lancuch znakow: %s\n", losuj_wyraz);

    if(strchr(losuj_wyraz, c)==NULL) printf("Podany znak nie występuje w wylosowanym łańcuchu\n");

    else {
        remove_char(losuj_wyraz, c);
        printf("Lancuch znakow po usunieciu znaku '%c': %s\n", c, losuj_wyraz);
    }

    return 0;
}
