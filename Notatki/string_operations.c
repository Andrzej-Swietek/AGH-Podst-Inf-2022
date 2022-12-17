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
 char food2[] = " & chips";
 strcat(food, food2);            // append food2 to food1                  | => food: fish & chips
 strncat(food, food2, 4); // append n characters from food2 to food1 | => food: "fish & c"

 // String compare => 0 if true | non zero if not
 int result = strcmp(food, food2);
 int result2 = strncmp(food, food2, 4);         // Compare n characters of food and food2
 int result = strcmpi(food, food2);              // Compare ignoring case sensitivity
 int result2 = strncmpi(food, food2, 4);         // Compare n characters of food and food2 ignoring case sensitivity

 strlwr(food);           // To Lowercase
 strupr(food);           // To Uppercase


 return 0;
}