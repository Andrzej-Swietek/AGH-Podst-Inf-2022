//
// Created by Andrzej on 17.12.2022.
//

#include <stdio.h>
#include <string.h>

int main() {

 char text[] = "C Programming";                // string declaration with inferred length
 printf("%zu", strlen(text));       // string length

 char food[] = "fish";
 char bestFood[strlen(food)];
 strcpy(bestFood, food);       // Copy string to another


 // Add string to another and store in first one
 char food2[] = "& chips";
 strcat(food, food2);          // => food: fish & chips

 // String compare => 0 if true | non zero if not
 int result = strcmp(food, food2);

 return 0;
}