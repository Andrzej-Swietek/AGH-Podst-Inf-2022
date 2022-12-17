//
// Created by Andrzej on 17.12.2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int N;
    scanf("%d", &N);
    int num[N];
    time_t t;
    srand((unsigned) time(&t));
    int even[N];
    int current_even = 0;

    for(int i=0;i<N;i++){
        num[i] = rand()%61;
        printf("%d : %d \n", i, num[i]);
        if(num[i] % 2 == 0){
            even[++current_even] = i;
        }
    }

    for(int i=0;i<N;i++){
        if(current_even > 0 && even[current_even] > i){
            if(num[i]%2 == 1){
                int j = even[current_even--];
                int tmp = num[j];
                num[j] = num[i];;
                num[i] = tmp;
            }
        }
    }
    for(int i=0;i<N;i++)
        printf("%d: %d \n", i, num[i]);


    return 0;
}
