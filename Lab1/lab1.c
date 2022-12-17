#include <stdio.h>

// ls command -> idzie do sciezki $PATH a nastepnie przeszukuje /sbin/ jak nieznajdzie to wypluje blad

int main () {
    short count = 0;

    for ( short i = -4; i <= 98; i+=4) {
        if ( i%4==0 && i%5!=0 ) {
            printf("%2d ", i);
            count++;
        }   
    }
    printf("\nCOUNT: %d\n", count);

    return 0;
}