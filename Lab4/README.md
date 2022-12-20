# LAB 4

#### (3) 1. Proszę napisać program, który wczytuje 8 znakowy napis ( mają to  być zera lub jedynki), potem wypisuje go z wykorzystaniem formatu %s. Następnie w programie należy zamienić łańcuch znaków, przedstawiający zapis binarny liczby w U2, na liczbę całkowitą  w systemie dziesiętnym. N

Przykład działania programu
```
Jeżeli wprowadzimy ciąg "01001001", program ma wypisać 73
Jeżeli wprowadzimy ciąg "11001011", program ma wypisać -53
```



#### ( 4 ) 2. Proszę napisać program, który wypisze na ekranie reprezentację binarną wczytanej liczby całkowitej zapisanej w kodzie U2.
- !!! Dokonujac konwersji należy korzystać z operacji bitowych oraz   operatora ```? :```
- Do zapisu należy użyć odpowiednio dużej tablicy znaków  ```char liczba[]```.
- Należy sprawdzić, czy wczytana jest w zakresie typu integer.
- Ostatni element ```tablicy ='\0'```
- Program ma wczytywać liczbę i wypisywać jej konwersję (jako łańcuch znaków).

```c
char liczba[ ]; 
int numer; 
//wczytanie liczby i sprawdzenie czy jej reprezentacja bitowa  zmiesci sie w tablicy 
        
........ 
........ 
........ 
printf ("liczba %d zapis binarny %s", numer,liczba); //liczba 11 zapis binarny 00000000000000000000000000001011
```

#### ( 4 ) 3. Proszę napisać program zamieniający kolejność elementów tablicy liczb całkowitych w taki sposób, by elementy, których suma cyfr jest parzysta znalazły się na początku, a elementy, których suma cyfr jest nieparzysta na końcu tablicy (nie trzeba zachowywać kolejności występowania liczb) - rozmiar tablicy wczytujemy z klawiatury, wartości losujemy z zakresu <0, 60>. 
Przykład działania programu dla tablicy 10-cio elementowej
```
Przed:
   element[0] = 19
  element[1] = 23
  element[2] = 14
  element[3] = 83
  element[4] = 12
  element[5] = 20
  element[6] = 12
  element[7] = 63
  element[8] = 42
  element[9] = 53
Po zamianie:
  element[0] = 19
  element[1] = 20
  element[2] = 42
  element[3] = 53
  element[4] = 63
  element[5] = 12
  element[6] = 12
  element[7] = 83
  element[8] = 14
  element[9] = 23
```

#### ( 4 ) 4. Proszę napisać program, który przyjmie od użytkownika dwie liczby typu int.
- Używając operatorów bitowych należy zbudować  maskę bitową.
- Wykorzystując operatory bitowe oraz stworzona maskę  sprawdzić, czy prawa (najmniej znacząca) połowa bitów obu liczb jest taka sama.
- Program ma wypisać wartość użytej maski oraz prawdę lub fałsz. 
- Program powinien działać uniwersalnie, niezależnie od sprzętu: należy najpierw sprawdzić, ile bitów zajmuje dany typ, i na tej podstawie utworzyć maskę.

Przykład działania programu.:
```
liczby 46196 oraz 1094772 powinny dać w wyniku prawdę
liczby 1431328341 oraz 599501228 powinny dać w wyniku fałsz
```