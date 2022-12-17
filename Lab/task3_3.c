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

    long long tab[10];
    int n;
    scanf("%d", &n);
    assert(n > 10000);

    while( n ) {
        const int randValue = random_float( 0.0, 9.9999 );
        int bucketIdx = (int)randValue;
        tab[bucketIdx]++;
        n--;
    }

    for ( int i = 0; i < 10; i++ ) {
        printf("%lld \n", tab[ i ]);
    }

}