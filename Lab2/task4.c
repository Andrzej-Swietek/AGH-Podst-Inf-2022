//
// Created by Andrzej on 27.11.2022.
//

#include <stdio.h>
#define EPS 0.00000001

int main () {
    float i = 1;
    double sum = 0;
    int count = 0;

    // ai > eps
    while ( 1/(i*i) >= EPS ) {
        sum += 1/(i*i);
        i++;
        count++;
    }

    printf("SUMA %d ELEMENTOW: %.4lf ",count, sum );

    return 0;
}