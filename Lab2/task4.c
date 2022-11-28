#include <stdio.h>
#include <assert.h>


int main () {
    double eps; 
    scanf("%lf", &eps);
    assert( eps > 0.0 && eps < 1.0 );
    float i = 1;
    double sum = 0;
    int count = 0;

    // ai > eps
    while ( 1/(i) >= eps ) {
        sum += 1/(i);
        i++;
        count++;
    }

    printf("SUMA %lf \n", sum );

    return 0;
}

