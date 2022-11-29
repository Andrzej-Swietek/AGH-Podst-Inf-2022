//
// Created by Andrzej on 29.11.2022.
//
#include <stdio.h>

int main() {
    short iterator = -4;
    short count = 0;
    for (iterator; iterator < 98; iterator+=4)
        if( iterator % 5 != 0 ){
            printf("%2d \n", iterator);
            count++;
        }

    return 0;
}