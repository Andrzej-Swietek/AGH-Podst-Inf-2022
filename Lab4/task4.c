//
// Created by Andrzej on 20.12.2022.
//
#include <stdio.h>
#include <limits.h>

int main()
{
    int a, b;
    printf("Podaj po spacji pierwszą i drugą liczbę: ");
    scanf("%d %d",&a, &b );

    // Używamy maksymalnej wartości typu int jako maska, aby uzyskać wszystkie bity
    int mask = INT_MAX;

    // Dzielimy maksymalną wartość przez 2, aby otrzymać maskę dla połowy bajtów (połowy najmniej znaczących bitów)
    mask >>= (sizeof(int) * CHAR_BIT) / 2;

    // Używamy maski, aby "wyczyścić" połowę najmniej znaczących bitów w obu liczbach
    int a_masked = a & mask;
    int b_masked = b & mask;

    // Porównujemy oba wyniki i wyświetlamy wynik
    if (a_masked == b_masked)
        printf("True \n");
    else
        printf("False \n");

    printf("MASKA: %d", mask); 

    return 0;
}
