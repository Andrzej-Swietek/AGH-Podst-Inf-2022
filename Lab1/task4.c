//
// Created by Andrzej on 29.11.2022.
//
#include <stdio.h>
#include <assert.h>

int main() {

    int quantity;
    const int banknotes[3] = {20, 10, 5};
    scanf("%d", &quantity);

    assert(quantity >= banknotes[2]);

    int banknote = 0;
    while ( quantity >= 0 && banknote < 3 ) {
        if ( quantity - banknotes[banknote] > 0 ){
            printf("%d PLN ", banknotes[banknote]);
            quantity -= banknotes[banknote];
        } else
            banknote++;
    }

    return 0;
}