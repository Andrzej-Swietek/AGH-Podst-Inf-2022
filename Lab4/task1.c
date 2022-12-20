//
// Created by Andrzej on 20.12.2022.
//
#include <stdio.h>
#include <stdlib.h>

#define N 8

int main(void) {
    char input[N+1];
    int value = 0;


    printf("Wprowadz ciag zer i jedynek (8 znakow): ");
    scanf("%8s", input);
    printf("Wczytano ciag: %s\n", input);


    int is_negative = (input[0] == '1');
    if (is_negative) {
        for (int i = 1; i < 8; i++) {
            input[i] = (input[i] == '0') ? '1' : '0';
        }
    }

    int p = 1; // 2^n sobie powiekszam zeby nie potegowac co iteracje - memoization :)
    for(int i=N-1;i>=1;i--){
        value += (input[i]=='1')? p : 0;
        p *= 2;
    }

    if (is_negative) {
        value = -value-1;
    }

    printf("Wartosc liczby w systemie dziesietnym: %d\n", value);

    return 0;
}
