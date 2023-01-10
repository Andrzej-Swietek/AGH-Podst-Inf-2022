#include<stdio.h>
#include <time.h>
#include <stdlib.h>

float random_float( float min, float max ) {
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return min + scale * ( max - min );      /* [min, max] */
}

float* where(float *first, float *last) {
    float* min = NULL;
    int i = 0;
    while ( (first + i) != last ) {
        // ujemna               // najwieksza do tej pory   
        if ( *(first+i) < 0 && ( min == NULL || *min < *(first+i) ) ) {
            min = (first+i);
        }
        i++;
    }

    return min;
}

int main(void) {
    int n;
    scanf("%d",&n);
         
    time_t tt;
    srand( (unsigned int)time(&tt) );  
    
    float tab[n];
    for(int i = 0; i < n; i++) {
        *( tab + i ) = random_float(-10.0, 10.0);
        printf("tab[%d] = %f | addr = %p \n", i, *(tab + i), tab + i);
    }

    float* res = where(tab, tab+n-1);
    if(res == NULL) printf("BRAK UJEMNEJ");
    else {
        printf("Najwieksza ujemna to: %f \n",*(res));
    }


    return 0;
}