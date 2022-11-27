//
// Created by Andrzej on 28.11.2022.
//
#include <stdio.h>

int main() {
    int n = -1;
    do {
        printf("Podaj cyfre:");
        scanf("%d", &n);
    } while ( n > 9  || n < 0);

    for (int i = 0; i < n+1; i++) {
        for ( int j = 0; j < n; j++)
            if ( j < n-i )
                printf(" ");
            else
                printf("%d", n-(j-n)-i);

        printf(" ");

        int iter = n-i;
        while ( iter >= 0 ) {
            printf("%d",iter);
            iter--;
        }
        printf(" \n");
    }

    return 0;
}