# Lab 2

#### 1. ( 3 ) Proszę napisać program, który wczyta z klawiatury cyfrę scanf("%d",&n);, a następnie wyświetli na ekranie dwa trójkąty według poniższego schematu.

Przykład działania programu dla cyfry 5:

      543210
      54321 0
      5432 10
      543 210
      54 3210 
      5 43210

#### 2. ( 3 ) Proszę napisać program, który wpisze wszystkie liczby pierwsze z zakresu a, b. Liczby a i b powinny być wylosowane.
Jeżeli chcemy wykorzystać pierwiastek -funkcja ```double sqrt(double);``` znajduje się w bibliotece ```math.h``` , czyli
należy dołączyć plik nagłówkowy ```#include <math.h>```
należy dolinkować bibliotekę matematyczną - komenda kompilacji: 
```
gcc nazwa_pliku.c -o nazwa_programu -lm
```


#### 3. ( 5 ) Proszę napisać program, który wczyta dużą literę i wypisz dla niej trójkąt zgodny z podanym przykładem.
Funkcja ```scanf("%c", &litera)``` powinna być wywołana wewnątrz pętli ```do..while```  dopóki wczytany znak nie będzie  poprawny (tj. musi należeć do przedziału ['A', 'Z'])

Przykład działania programu dla litery F:
```
Podaj litere: 5
Podaj litere: f
Podaj litere: F
A
BAB
CBABC
DCBABCD
EDCBABCDE
FEDCBABCDEF
```
#### 4. ( 3 ) Dla danego szeregu : ```1 + 1/2 + 1/3 + ⋯ + 1/n```
proszę napisać program, który sumuje ciąg do momentu aż suma  przekroczy wartość 10.
Program powinien wypisywać ilość zsumowanych elementów oraz obliczoną sumę z dokładnością do 10 cyfr po przecinku.
Suma 12367 elementow = 10.0000430083