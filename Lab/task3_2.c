#include<stdio.h>
#include<assert.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>

float random_float( float min, float max ) {
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return min + scale * ( max - min );      /* [min, max] */
}


int main(){

    float tab[10];
    time_t tt;
    srand( (unsigned int)time(&tt) );  

    for ( int i = 0; i < 10; i++ ) 
        tab[i] = random_float( -100.0, 100.0 );
        printf("element[%d] = %3.2f", i, tab[i]);

    for ( int i = 0; i < 10; i++ ) 
        printf("element[%d] = %3.2f", i, tab[10-i]); 

    


    return 0;
}