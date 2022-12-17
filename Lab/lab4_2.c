#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void) {
    char bin[9];
    bin[8]='\0';
    int number;
    scanf("%d", &number);
    assert(number >= 0 && number <= 255);

    for(int i=7;i>=0;i--){
        bin[7-i] = ( (number >>i) % 2) ? '1' : '0';
    }

    printf("Liczba %d to %s", number, bin);

    return 0;
}