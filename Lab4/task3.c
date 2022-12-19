//
// Created by Andrzej on 20.12.2022.
//
#include <stdio.h>
#include <stdlib.h>

int mod2(int x){
    int sum = 0;
    while(x > 0){
        sum += x%10;
        x /= 10;
    }

    return sum % 2 ? 1 : 0;
}



int main()
{
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
        if(mod2(num[i]) == 0){
            even[++current_even] = i;
        }
    }

    for(int i=0;i<N;i++){
        if(current_even > 0 && even[current_even] > i){
            if(mod2(num[i]) == 1){
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