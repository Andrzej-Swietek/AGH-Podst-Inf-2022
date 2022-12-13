#include<stdio.h>
#include<assert.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
#define ENDL printf("\n");

float random_float( float min, float max ) {
    float scale = rand() / (float) RAND_MAX; 
    return min + scale * ( max - min );      /* [min, max] */
}

int main(){
    int tab[10];
    time_t tt;
    int maximum = -1000;
    int counter = 0;
    srand( (unsigned int)time(&tt) );  
    for ( int i = 0 ; i < 10 ; i++ ) tab[i] = (int)random_float(-100.0, 100.0);
    for ( int i = 0 ; i < 10 ; i++ ) {
        if ( maximum < tab[i] ) (maximum = tab[i]) && (counter = 0);
        if ( maximum == tab[i]) counter++;
    }

    for ( int i = 0; i < 10; i++ ) {
        if( tab[i] > 0 )
            printf("Element[%d] = +%2d",i, tab[i]);
        else 
            printf("Element[%d] = %3d",i, tab[i]);
        ENDL
    }

    printf("Maxymalny element wystapil %d razy i jest nim %d", counter, maximum);
    ENDL
    
    return 0;
}