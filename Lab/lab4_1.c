#include <stdio.h>

#define N 8

int main()
{
    char c[N+1];
    scanf("%s", c);
    printf("%s \n", c);
    int decimal = 0;
    int p = 1;
    for(int i=N-1;i>=0;i--){
        decimal += (c[i]=='1')? p : 0;
        p *= 2;
    }

    printf("%d \n", decimal);

    return 0;
}