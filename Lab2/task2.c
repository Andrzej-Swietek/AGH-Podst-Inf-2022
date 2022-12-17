//
// Created by Andrzej on 28.11.2022.
//
#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if ( n == 2 || n == 3 )
        return 1;
    if ( n % 2 == 0 || n % 3 == 0)
        return 0;
    int i = 5;
    while ( i <= sqrt(n) ) {
        if ( n % i == 0 ) 
            return 0; 
        i+=2;

        if ( n % i == 0 )
            return 0;
        i+=4;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d",&n);

    if ( isPrime(n) == 1 ){
        printf("Liczba %d jest pierwsza \n", n);
    } else {
        printf("Liczba %d jest nie pierwsza \n", n);

        int k=2;
        while( sqrt(n)>1) {
                while(n%k==0)
                {
                        printf("%d ",k);
                        n/=k;
                }
                ++k;
        }
        printf("\n");
    }

    return 0;
}