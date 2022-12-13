#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ENDL printf("\n");

float random_float( float min, float max ) {
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return min + scale * ( max - min );      /* [min, max] */
}

void formatedPrint(float n, int i) {
    if( n >= 0.0 ) {
        printf("element[%d] = +%5.2f", i, n);
        ENDL
    } else {
        printf("element[%d] = %6.2f", i, n);
        ENDL
    }
}

int main(){
    int n;
    scanf("%d", &n);
    assert(n>0);

    float tab[n];
    
    time_t tt;
    srand( (unsigned int)time(&tt) );  
    

    for ( int i = 0; i < n; i++ ) {
        tab[i] = random_float( -100.0, 100.0 );
        formatedPrint(tab[i],i);
        // printf("%f", tab[i]);
        // printf("element[%d] = %3.2f", i, tab[i]);
    }


        float first = tab[n-1];
        for( int i = n-1 ; i >= 0; i-- ) {
            tab[i] = tab[ i-1 ];
        }
        tab[0]=first;


    printf("\n Shifted \n");

    for ( int i = 0; i < n; i++ ) {
        formatedPrint(tab[i],i);
    }

    // for ( int i = 0; i < 10; i++ ) 
    //     printf("element[%d] = %3.2f", i, tab[10-i]); 

    


    return 0;
}