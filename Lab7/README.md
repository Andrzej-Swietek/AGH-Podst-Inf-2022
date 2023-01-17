# Lab 7

#### 1. ( 4 ) Proszę uzupełnić program według wskazówek zawartych w komentarzach.

 ```c        
#include ......                     //konieczne biblioteki
#include ......                     

int main(......, .......)    //komentarze dla wywołania z argumentami Jeden Dwa 
{      
 //deklaracja koniecznych zmiennych, miedzy innymi tablic nap_1 oraz nap_2 
  
//zapisanie argumentów wywołania programu do tablic nap_1 oraz nap_2

printf ("A -->  napis_1 = %s napis_2 = %s\n", nap_1, nap_2);   //zostanie wypisane: A --> napis_1 = Jeden napis_2 = Dwa 
  
//wymiana zawartosci tablic nap_1 i nap_2

printf ("B -->  napis_1 = %s napis_2 =  %s\n", nap_1, nap_2);    //zostanie wypisane: B --> napis_1 = Dwa napis_2 = Jeden 
return 0;
}
 ``` 
```
Wynik działania programu dla wywołania ./a.out Jeden Dwa
    A --> napis_1 = Jeden napis_2 = Dwa
    B --> napis_1 = Dwa napis_2 = Jeden
```

#### 2. ( 6 ) Proszę napisać program bez użycia zmiennych globalnych oraz bez użycia operatora tablicowego ```[]``` poza deklaracją tablicy.

W programie należy zaimplementować obsługę kolejki ```LIFO (stos)``` w oparciu o tablicę jednowymiarową liczb całkowitych o zadanym przed dyrektywę #define rozmiarze.

Należy zdefiniować funkcje:
- czytanie stosu od najstarszego elementu 
dokładania elementu do stosu 
- zbierania ze stosu - funkcja ma zwracać wskaźnik do "zdjętego" elementu,
- wypisanie wartości ma być zrealizowane w funkcji main

#### 3. ( 5 ) Proszę napisać i przetestować funkcję/procedurę  razem , która dwie dowolnie długie posortowane rosnąco tablice łączy w jedną tablicę posortowaną rosnąco (bez sortowania).
W całym  programie nie korzystamy z dynamicznej alokacji pamięci oraz ze zmiennych globalnych.

Wynik działania programu
```c
    int tab1[] = {1,12,13,14,22};
    int tab2[] = {3,4,13,45,54,55,56,66};
 ```
 ```
   tablica result → 1,3,4,12,13,13,14,22,45,54,55,56,66
```