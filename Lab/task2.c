//
// Created by Andrzej on 27.11.2022.
//

#include <stdio.h>
typedef unsigned long long int ulli;

int main() {

    int start = 2001;
    int end = 3000;
    int sum = 0;
    ulli product = 1;

    while ( start < end ) {
        if( start % 113 == 0 ) {
            sum += start;
            product *= start;
            printf("%d ",start);
        }
        start+=2;
    }

    printf("\nSUMA = %d , ILOCZYN = %lld \n", sum, product );

    return 0;
}