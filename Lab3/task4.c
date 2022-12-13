#include<stdio.h>
#include<assert.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>

float random_float( float min, float max ) {
    float scale = rand() / (float) RAND_MAX; 
    return min + scale * ( max - min );      
}


int main(){

    long long tab[20];
    int n;
    scanf("%d", &n);
    assert(n >= 10000);

    while( n ) {
        const int randValue = random_float( -9.9999, 9.9999 );
        int bucketIdx = (int)randValue+10-1;
        tab[bucketIdx]++;
        n--;
    }

    for ( int i = 0; i < 20; i++ ) {
        printf("Przedzial [%2.2f - %2.2f) %lld \n", -10.0 + (float)i, -10.0 + (float)i +1.0, tab[ i ]);
    }

}