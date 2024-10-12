/*
    RMIT University Vietnam
    Course: EEET2601 Engineering Computing 1
    Semester: 2024-1
    Lab Assessment: 2
    Author: Vo Huy Chu
    ID: 4075654
    Compiler gcc 13.2.0
    Created  date: 27/04/2024
    References: None.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main() {
  // Question a.
  char a_string[SIZE];
  char isLowercase = 1;
  int number_of_lowercase_words = 0;
  int i = 0, j = 0;

  // Ask the user to input a string:
  printf("Input a string: ");
  scanf("%[^\n]", a_string);
  while (getchar() != '\n')
    ;
  strcat(a_string, "\0");

  // Loop through the string until the end and add up all the words that only
  // contain lowercase characters:
  while (a_string[i] != '\0') {
    if (a_string[i] != ' ' && a_string[i] != '\0') {
      if (a_string[i] < 'a' || a_string[i] > 'z') {
        isLowercase = 0;
      }
    } else {
      if (isLowercase == 1) {
        number_of_lowercase_words++;
      }
      isLowercase = 1;
    }
    i++;
  }
  if (isLowercase == 1) {
    number_of_lowercase_words++;
    isLowercase = 0;
  }

  // Print out the number of all lowercase words:
  printf("The number of all lowercase words: %d\n", number_of_lowercase_words);

  // Question b.
  char another_string[SIZE];
  char buffer_string[SIZE];

  // Ask the user to input another string:
  printf("Input another string: ");
  scanf("%[^\n]", another_string);

  // Loop through the original string until a space is encountered and copy each
  // letter into a buffer string:
  while (a_string[j] != ' ') {
    buffer_string[j] = a_string[j];
    buffer_string[j + 1] = '\0';
    j++;
  }
  strcat(buffer_string, " ");

  // Insert the second string into the buffer string:
  strcat(buffer_string, another_string);
  int length = strlen(buffer_string);

  // Add the rest of the original string to the buffer string:
  while (a_string[j] != '\0') {
    buffer_string[length] = a_string[j];
    length++;
    j++;
  }

  // Copy the buffer string back to the original string:
  strcpy(a_string, buffer_string);

  // Print out the string after it was inserted:
  printf("The string after being inserted another string: %s\n", a_string);

  return (0);
}