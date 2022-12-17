//
// Created by Andrzej on 17.12.2022.
//
#include <stdio.h>

struct Person {
    char *name; // dynamic allocation needed for unknown length -> while assigning just use ""
    int age;
    float height;
};

struct Struktura {
    short shortNumber;
    int integerNumber;
} myStruct;


// STRUCT WITH TYPE
typedef struct {
    char *name;
    char *password;
    int id;
} User;


int main(void) {
    struct Person person1;
    person1.name = "Andrzej";
    person1.age = 21;
    person1.height = 175.55555;

    printf(" [ name ] : %s \n [ age ] : %d \n [ height ] : %.2f \n", person1.name, person1.age, person1.height);

    myStruct.integerNumber = 9999999;
    myStruct.shortNumber = 7;

    printf("Struct size %d \n", sizeof(myStruct)); // tutaj 8 bo int + short

    /*
        * Unia pozwala na swobodną zmianę typów bez konieczności stosowania rzutowania jawnego pomiędzy nimi.
        * Taka konwersja typów oszczędza w późniejszym etapie kodu martwienie się o przepełnianie danych struktur czy zmiennych.
        *
        * UNIA DEKLARUJE TYLKO TYLE PAMIECI ABY POMIESCIC NAJWIEKSZA DANA KTORA PRZECHOWUJE
        * Zapis oby zmiennych odbywa sie dokładnie w tym samym miejscu pamieci
    */
    union Unia {
        short shortNumber;
        int integerNumber;
    } myUnion;

    myUnion.shortNumber = 7; // I int i short dostana wartosc 7

    myUnion.integerNumber = 9999999; // Tu wartosci obu zmiennych beda nadpisane z ytm ze w shortcie sie nie zmieszcza i przekreci licznik

    User user1 = { "Andrzej", "haslo", 1  };
    User user2 = { "Admin", "admin1", 2  };


    // ARRAYS OF STRUCTS

    struct Person studens[] = { person1, { "student1", 21, 165 }, { "student2", 22, 165 } };
    for( int i=0; i < sizeof(studens)/sizeof(studens[0]), i++ ) {
        printf("[ STUDENT %2d ]: %s",i, studens[i].name );
    }


    return 0;
};