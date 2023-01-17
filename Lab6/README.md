# Lab 6

#### 1. ( 4 ) Program proszę zaimplementować w notacji wskaźnikowej, czyli bez operatora tablicowego [ ]
Proszę napisać funkcję ```........ where(float *first, float *last);``` , do której przekazujemy tablicę liczb rzeczywistych, która zwraca wskaźnik do największego elementu ujemnego w przekazanej tablicy - UWAGA w tablicy może nie być elementów ujemnych.
W funkcji main(), proszę utworzyć  tablicę liczb rzeczywistych o rozmiarze wczytanym z klawiatury i wypełnić ją liczbami losowymi z zakresu <-10.0, 10.0>
W programie należy wypisać tablicę w formacie:
```
    tab[0] = 0.593706, adres elementu: 0x7ffd87595f20
    tab[1] = 0.127097, adres elementu: 0x7ffd87595f28
    ..........
```
Wykorzystując funkcję where , proszę znaleźć największy element ujemny, wypisać jego adres, wartość oraz indeks. Jeżeli w tablicy nie ma elementów ujemnych należy wypisać stosowny komunikat.


#### 2. ( 6 ) W funkcji main(), korzystając z funkcji scanf() proszę pobrać liczbę, dla której zostanie obliczony n-ty wyraz ciągu Fibonacciego.Proszę napisać funkcję rekurencyjną, która pozwoli wypisać drzewo wywołań rekurencyjnych.
Nie korzystamy ze zmiennych globalnych.
Wynik dla wartości wczytanej 6
Głębokość wywołań(kropki), Działanie, l=liczba wywołań
```
0, Obliczam f(6)=f(5)+f(4), l=1
1., Obliczam f(5)=f(4)+f(3), l=2
2.., Obliczam f(4)=f(3)+f(2), l=3
3..., Obliczam f(3)=f(2)+f(1), l=4
4...., Obliczam f(2)=f(1)+f(0), l=5
5....., Zwracam f(1), l=6
5....., Zwracam f(0), l=7
4...., Zwracam f(1), l=8
3..., Obliczam f(2)=f(1)+f(0), l=9
4...., Zwracam f(1), l=10
4...., Zwracam f(0), l=11
2.., Obliczam f(3)=f(2)+f(1), l=12
3..., Obliczam f(2)=f(1)+f(0), l=13
4...., Zwracam f(1), l=14
4...., Zwracam f(0), l=15
3..., Zwracam f(1), l=16
1., Obliczam f(4)=f(3)+f(2), l=17
2.., Obliczam f(3)=f(2)+f(1), l=18
3..., Obliczam f(2)=f(1)+f(0), l=19
4...., Zwracam f(1), l=20
4...., Zwracam f(0), l=21
3..., Zwracam f(1), l=22
2.., Obliczam f(2)=f(1)+f(0), l=23
3..., Zwracam f(1), l=24
3..., Zwracam f(0), l=25

rFibonacci (6) = 8
```
#### 3. ( 5 ) Proszę napisać program, który zostanie wywołany z jednym  argumentem, którym będzie mała litera.
W funkcji main proszę zadeklarować tablicę jednowymiarową losuj_wyraz o długości 20 i wypełnić ją losowymi małymi literami tak, aby powstał łańcuch znaków.
Korzystając z funkcji ```strchr``` (z biblioteki ```string.h```), proszę usunąć z tablicy wszystkie wystąpienia  literki, która została podana jako argument wywołania programu.
Jeżeli znak nie występuje wypisujemy stosowny komunikat.
Przykład działania programu:

 wywołanie programu: ```./a.out j ```

 wylosowany łańcuch znaków: 
 ```afhdjeuhsjndeandfhw```

Wynik dla argumentu wywołania, czyli dla j:

```łańcuch znaków: afhdeuhsndeandfhw```