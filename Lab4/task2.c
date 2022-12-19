//
// Created by Andrzej on 20.12.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdint.h> // bo INT32_MAX nie wchodzi

int main()
{
    char bin[33];
    bin[32]='\0';
    int number;
    scanf("%d", &number);
    assert( number >= INT32_MIN && number <= INT32_MAX);

    bin[0] = number >= 0 ? '0' : '1';

    number = (bin[0] == '1') ? -number : number;

    for(int i=30;i>=0;i--){
        bin[31-i] = ( (number >>i) % 2) ? '1' : '0';
    }

    if(bin[0] == '1'){
        for(int i=31; i>=1 ;i--){
            bin[i] = ( bin[i] == '0' ) ? '1' : '0';
        }
    }
    int i = 31;
    while(i>0){
        if(bin[i]=='0'){
            bin[i] = '1';
            break;
        }
        else{
            bin[i]='0';
            i--;
        }
    }

    printf("%32s", bin);

    return 0;
}