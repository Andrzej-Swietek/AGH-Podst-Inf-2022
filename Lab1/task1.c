//
// Created by Andrzej on 29.11.2022.
//
#include <stdio.h>

int n;
int main() {

    int zm_1 = 4;
    int zm_3 = 7;
    printf("zmienna n = %2d, zmienna zm_3 = %2d \n", n, zm_3);         // n = 0 | zm_3 = 7 (2)
    printf("zmienna zm_1 = %2d , zmienna zm_3 = %d \n", zm_1, zm_3);   // zm_1 = 4 | zm_3 = 7 (4)

    {
        int zm_2 = 10;
        printf("zmienna n = %2d, zmienna zm_2 = %2d \n", n, zm_2);     // n = 0 | zm_2 = 10 (1)
        int zm_3 = 6;

        int n = 12;
        zm_3 = zm_3 + 1;
        printf("zmienna n = %2d, zmienna zm_3 = %2d \n", n, zm_3);     // n = 12 | zm_3 = 7 (3)

        zm_1 = 6;
        printf("zmienna zm_1 = %2d , zmienna zm_3 = %2d, zmienna zm_2 = %2d \n", zm_1, zm_3, zm_2);   // zm_1 = 6 | zm_3 = 7 | zm_2 = 10 (5)
    }
    zm_3 = zm_3 + 1;
    printf("zmienna n = %2d , zmienna zm_3 = %2d \n", n, zm_3);


    return 0;
}