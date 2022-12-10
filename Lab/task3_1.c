#include<stdio.h>
#include<assert.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>

int randomInt(int from , int to) {
    return rand()%(to-from+1);
}

void sum(int* bigger, int* smaller, int* result, int resultSize) {
    int size1 = sizeof(bigger) / sizeof(bigger[0]);
    int size2 = sizeof(smaller) / sizeof(smaller[0]);

    int i = 0;
    int c = 0;
    while ( size2 - i >= 0 ) {
        int tmp = bigger[ size1 - i ] + smaller[ size2 - i ] + c;
        c = 0;
        if ( tmp >= 10 ) {
            tmp -= 10;
            c = 1;
        }
        result[ resultSize - i ] = tmp;
        i++;
    }

    if ( c != 0 ) result[ size2 - i - 1 ] += 1;
    
}

int main(){
    int n,m;
    time_t tt;
    srand( (unsigned int)time(&tt) );   // Initialization, should only be called once.


    printf("Podaj długosc liczb a i b ( a - dluzsza liczba ):_\b");
    scanf("%d %d", &n, &m);
    assert(n != NULL && n > 1 && m != NULL && m > 1 && m < n);
    
    int *number1; 
    int *number2;
    int *result;

    // malloc() allocate the memory for n chars 
    int resultSize = max(n,m)+1;
    number1 = (int *)malloc(n * sizeof(int)); 
    number2 = (int *)malloc(n * sizeof(int)); 
    result = (int *)malloc(() * sizeof(int));

    for ( int i = 0; i < n; i++ )  number1[ i ] = randomInt(0,9);  
    for ( int i = 0; i < m; i++ )  number2[ i ] = randomInt(0,9);  
    for ( int i = 0; i < resultSize; i++ ) result[ i ] = i == 0 ? 0 : number1[i - 1] ;  

    sum(number1, number2, result, resultSize);


    // char a[20]="Program";
    // char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    // printf("Length of string a = %zu \n",strlen(a));

    //    fgets(name, sizeof(name), stdin);  // read string
    //     printf("Name: ");
    //     puts(name);    // display string
    // .   fgets(name, sizeof(name), stdin);  // read string
    //     printf("Name: ");
    //     puts(name);    // display string


    free( number1 ); 
    free( number2 );
    free( result );
    return 0;
}