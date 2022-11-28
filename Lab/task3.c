//
// Created by Andrzej on 28.11.2022.
//
#include <stdio.h>

void getLine(int n, int j){
    for(int i=0;i<j;i++)
        printf(" ");
    for(int i=n;i>=65;i--)
        printf("%c", (char)(i));


    for(int i=66;i<=n;i++)
        printf("%c", (char)(i));
    printf("\n");
}

int main()
{
    char letter = '-';
    scanf("%c", &letter);

    int n = letter;
    int j = 0;
    for(int i=n;i>=65;i--){
        getLine(i, j);
        j++;
    }

    return 0;
}