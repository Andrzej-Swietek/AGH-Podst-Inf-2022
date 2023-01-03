//
// Created by Andrzej on 03.01.2023.
//
#include <stdio.h>
#include <stdlib.h>

float suma (float* first, int n ){
    float sum = 0.0;
    for(int i=0; i< n ; i++ )
        sum += *(first + i);
    return sum;
}

double iloczyn (float* first, float* last ){
    double iloczyn = *first;
    int i = 1;
    do {
        float tmp = *(first +i);
        iloczyn *= (double)tmp;
        i+=1;
    } while ( first+i != last);

    return iloczyn;
}

int main(void) {
    // W funkcji main proszę zadeklarować 100 elementową tablicę liczb rzeczywistych i wypełnić ją kolejnymi liczbami zaczynając od -3.0 z krokiem 0.07
    float tab[100];
    float value = -3.0;
    for( int i=0; i < 100; i++ ) {
        tab[i] = value;
        value += 0.07;
    }

    for (int i = 0; i < 100; i +=10 ){
        printf("elementy od  %2d do  %2d suma = %2.2f , iloczyn %.9f \n", i, i+9,  suma(tab+i, 10), iloczyn(tab+i, tab+i+10));
    }


    return 0;
}