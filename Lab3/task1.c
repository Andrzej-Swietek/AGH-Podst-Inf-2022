#include <stdio.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define ENDL printf("\n");

int randomInt(int from , int to) {
    return rand()%(to-from+1);
}

void sum(int* number1, int* number2, int* result, int n){
    int resultSize = n + 1;
    int i = 0;
    int c = 0;
    while ( n -1 - i >= 0 ) { 
        int tmp = number1[ n-1 - i ] + number2[ n-1 - i ] + c;
        c = 0;
        if ( tmp > 1 ) {
            c = 1;
            tmp -= 2;
        }
        result[ resultSize - i -1 ] = tmp;
        i++;
    }
    
}

int main() {

    time_t tt;
    srand( (unsigned int)time(&tt) );   

    int n;
    printf("Podaj dugosc liczb U1:");
    scanf("%d", &n);
    assert(n > 1);

    int* number1;
    int* number2;
    int* result;

    number1 = (int *)malloc(n * sizeof(int)); 
    number2 = (int *)malloc(n * sizeof(int)); 
    result = (int *)malloc( (n+1) * sizeof(int));

    for ( int i = 0; i < n; i++ )  number1[ i ] = randomInt(0,1);  
    for ( int i = 0; i < n; i++ )  number2[ i ] = randomInt(0,1);  

    for ( int i = 0; i < n; i++ )  printf("%d",number1[ i ]);
    ENDL
    for ( int i = 0; i < n; i++ )  printf("%d",number2[ i ]);
    ENDL

    sum( number1, number2, result, n );
    if( result[0] == 1 ) {
       for ( int i = 0; i < n-1; i++ ) number2[i] = 0; 
       number2[n-1] = 1;

       sum( result, number2, result, n );
    }

    for ( int i = 1 ; i < n+1; i++ )  printf("%d", result[ i ]);

    

    free( number1 ); 
    free( number2 );
    free( result );

    ENDL
    return 0;
}