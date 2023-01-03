//
// Created by Andrzej on 03.01.2023.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float random_float( float min, float max ) {
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return min + scale * ( max - min );      /* [min, max] */
}

void fun_1(int n, int *sum, int *product, float* mean ) {
    for( int i = 0; i < n; i++ ) {
        int tmp = (int)random_float(0.0,15.0);
        *(sum) += tmp;
        *(product) = *(product) * tmp;
        printf("%d - %d \n", tmp, *product); // wypisuje tylko informacyjnie co jest w srodku bo zdarzaja sie zera a wtedy iloczyn sie zeruje - zeby bylo wiadomo
    }

    *(mean) = (float)(*(sum)) / (float)n ;
}

int main(void) {
       
    time_t tt;
    srand( (unsigned int)time(&tt) );  

    int n;
    scanf("%d", &n);
    int suma = 0;
    int iloczyn = 1;
    float srednia = 0.0;
    fun_1( n, &suma, &iloczyn, &srednia );

    printf("n = %d | suma = %d | iloczyn %d | srednia %f \n", n, suma, iloczyn, srednia);
    return 0;
}