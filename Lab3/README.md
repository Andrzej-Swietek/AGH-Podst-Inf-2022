# Lab 3

#### 1. ( 4 ) Proszę zaimplementować operację dodawania liczb całkowitych zapisanych w systemie U1. Długość liczby wczytywana jest z klawiatury.

Przykład dla liczb 10-cyfrowych
```
  0101100100
+ 0000011111
 -----------
  0110000011
```
#### 2. ( 3 ) Proszę napisać program, w którym zostanie stworzona 10-cio elementowa tablica liczb całkowitych. Należy wypełnić ją liczbami losowymi z przedziału <-100, 100>
i wypisać jej zawartość tak, aby wszystkie wartości były wyrównane do prawej strony, ze znakiem.
Następnie należy wypisać wartość maksymalną, oraz ilość wystąpień tej wartości w tablicy.

Wynik działania programu powinien wyglądać tak (dla przykładowych danych)
```
element[0] =+19
element[1] =-23
element[2] = +1
element[3] =-13
element[4] = +1
element[5] =+93
element[6] =+12
element[7] =-23
element[8] =-42
element[9] =+93

Maksymalny element to 93, wystepuje 2 razy
```
#### 3. ( 4 ) Proszę napisać program, w którym zostanie stworzona n-elementowa (n wczytane z klawiatury) tablica liczb rzeczywistych. Należy wypełnić ją liczbami losowymi z przedziału <-100.0, 100.0>
i wypisać jej zawartość używając specyfikatora formatu %*.*f tak, aby wszystkie wartości były wyrównane do prawej strony i wypisane z dwiema cyframi po przecinku.
Następnie należy przesunąć cyklicznie elementy tablicy tak, aby po przesunięciu w elemencie o indeksie i znajdowała się wartość, która wcześniej była w elemencie o indeksie i-1, w elemencie o indeksie 0 ma znaleźć sie wartość, która wcześniej była w elemencie o indeksie n-1.
Na koniec ponownie wypisać  zawartość z dwiema cyframi po przecinku wyrównane do lewego brzegu wraz ze znakiem .
NIE KORZYSTAMY Z DODATKOWEJ TABLICY


Wynik działania programu powinien wyglądać tak (dla przykładowych danych)
```
element[0] = 19.23
element[1] =-23.34
element[2] = 14.01
element[3] =-83.09
element[4] = 12.45
element[5] =  0.43
element[6] = 12.34
element[7] =-63.99
element[8] =-42.68
element[9] = 93.66

Po zamianie:

element[0] = +93.66
element[1] = +19.23
element[2] = -23.34
element[3] = +14.01
element[4] = -83.09
element[5] = +12.45
element[6] = +0.43
element[7] = +12.34
element[8] = -63.99
element[9] = -42.68
```

### 4. ( 4 ) Proszę napisać program, który losuje n>10000 liczb zmiennoprzecinkowych z przedziału (-10, 10.0](liczba n ma być wczytana z klawiatury). W tablicy tab liczb całkowitych o dwudziestu elementach proszę zliczyć, ile wartości wylosowano z poszczególnych przedziałów: tak, aby

w elemencie ```tab[0]``` znajdowała się liczba wylosowanych wartości z przedziału (-10.0, -9.0],

w elemencie ```tab[1]``` znajdowała się liczba wylosowanych wartości z przedziału (-9.0, -8.0],

....

w elemencie ```tab[19]``` znajdowała się liczba wylosowanych wartości z przedziału (9.0, 10.0],
itd.
Premiowane jest rozwiązanie bez instrukcji if.
Na koniec proszę wypisać tablicę tab, w formacie:

Przykład działania programu
```
Podaj liczbe losowan: 10000000

przedzial  (-10.0, -9.0] ilosc  450683
przedzial  (-9.0, -8.0]  ilosc  499963
przedzial  (-8.0, -7.0]  ilosc  500168
przedzial  (-7.0, -6.0]  ilosc  499319
przedzial  (-6.0, -5.0]  ilosc  500544
przedzial  (-5.0, -4.0]  ilosc  499182
przedzial  (-4.0, -3.0]  ilosc  499906
przedzial  (-3.0, -2.0]  ilosc  501619
przedzial  (-2.0, -1.0]  ilosc  499764
przedzial  (-1.0, +0.0]  ilosc  998793
przedzial  (+0.0, +1.0]  ilosc  500554
przedzial  (+1.0, +2.0]  ilosc  501072
przedzial  (+2.0, +3.0]  ilosc  499570
przedzial  (+3.0, +4.0]  ilosc  499904
przedzial  (+4.0, +5.0]  ilosc  499709
przedzial  (+5.0, +6.0]  ilosc  499111
przedzial  (+6.0, +7.0]  ilosc  499820
przedzial  (+7.0, +8.0]  ilosc  499701
przedzial  (+8.0, +9.0]  ilosc  500535
przedzial  (+9.0, +10.0] ilosc   50083.
```