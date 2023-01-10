//
// Created by Andrzej on 03.01.2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 
#include <stdio.h>
#include <assert.h>

 unsigned int get_bits(unsigned int x, unsigned int p, unsigned int n) {

  unsigned int mask = (1 << n) - 1;
  mask = mask << p;

  unsigned int bits = x & mask;
  bits = bits >> p;
  return bits;
} 


int main ()
{  
   unsigned int wynik = 18;
   unsigned int liczba = 18; // 10010
   int p, n; // p - pozycja , n - to liczba bitów           
   // dla n=3 bity od pozycji p=1, czyli: 10010
   scanf("%u", &liczba); 
   scanf("%d %d", &p, &n);


    int requiredbits = 0;
    int tmp = liczba;
    while ( tmp ) {
        tmp /= 2;
        requiredbits++;
    }
    assert(requiredbits > n );

   n=3;
   p=1;
   wynik = get_bits(liczba, p, n ); 
   printf("\n wynik = %d \n",wynik); // 001 = 1
   return 0;
}