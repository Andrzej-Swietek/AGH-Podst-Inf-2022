#include <stdio.h>



int fib(int n, int depth, int counter) {
  counter++;
  if ( n == 1 || n == 0 || n <= 2 ) 
    return 1;

  printf("%d", depth);
  for(int i = 0; i < depth; i++) printf(".");
  printf(" Glebokosc = %d obliczam f(%d) = f(%d) + f(%d) | l = %d \n", depth, n, n-1 ,n-2, counter);
  int nm1 = fib(n-1, depth+1, counter);
  int nm2 = fib(n-2, depth+1, counter);
  
  printf("zwracam %d\n", n);
  return nm1 + nm2; 
}

int main(void) {

    int n;
    scanf("%d",&n);

    int x = fib(n, 0, 0);
    printf("\n f(n) == %d \n ", x);

    return 0;   
}