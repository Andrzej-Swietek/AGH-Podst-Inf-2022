//
// Created by Andrzej on 28.11.2022.
//
#include <stdio.h>
#include <time.h>
#include <limits.h>

#define FROM 118
#define TO 286

int randomInt(int from , int to) {
    return rand()%(to-from+1);
}

int main() {
    time_t czas;
    srand( (unsigned int)time(&czas) );   // Initialization, should only be called once.

    int sum = 0;
    int mininal = INT_MAX;
    int maximum = INT_MIN;
    for ( int i = 0; i < 20; i++ ) {
        const int number = randomInt(FROM, TO);
        mininal = mininal > number ? number : mininal;
        maximum = maximum < number ? number : maximum;
        sum += number;
    }
    const float mean = (float)sum / 20;

    printf(" [ MIN ] : %4d | [ MAX ] : %4d ", mininal, maximum);
    printf("\n [ SUM ] : %d | [ MEAN ] : %2.2f \n",sum, mean);


    return 0;
}