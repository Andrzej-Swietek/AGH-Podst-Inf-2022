# LAB 1

#### 1. Proszę wstawić do poniższego programu w odpowiednim miejscu instrukcję printf

```c
#include <stdio.h>
int n; //jest inicjalizowana na 0 jako globalna
int main(){
int zm_1 = 4;
int zm_3 = 7;

{int zm_2 = 10;
int zm_3 = 6;
int n = 12;
zm_3 = zm_3 +1;
zm_1 = 6;
}
zm_3 = zm_3 + 1;

return 0;
}
```
tak, aby w  wyniku znalazły się następujące linijki - kolejność nie jest obowiązkowa:
```
zmienna n = 0, zmienna zm_2 = 10
zmienna n = 0, zmienna zm_3 = 7
zmienna n = 12, zmienna zm_3 = 7
zmienna zm_1 = 4, zmienna zm_3 = 7
zmienna n = 0, zmienna zm_3 = 8
zmienna zm_1 = 6, zmienna zm_3 = 7, zmienna zm_2 = 10
```


#### 2. Proszę napisać program, który wypisze na ekranie wszystkie liczby podzielne przez 4 i niepodzielne przez 5 z przedziału od -5 do 98, a następnie napisze ile ich jest.
___
#### 3. Proszę napisać program, który wylosuje 20 liczb pseudolosowych z przedziału od 118 do 286, wypisze na ekran najmniejszą i największą oraz średnią arytmetyczną z wylosowanych liczb.
___
#### 4. Proszę napisać program, który wczyta kwotę podzielną prze 5 (wczytujemy nie więcej niż 3 razy - jeśli po trzech próbach nadal zła wartość → komunikat i wyjście z programu ), a następnie wypisze jak "wypłacić" ją minimalną ilością banknotów. Mamy do dyspozycji banknoty o nominałach 20, 10 oraz 5.
