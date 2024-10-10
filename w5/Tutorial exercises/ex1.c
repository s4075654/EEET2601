#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define SIZE 100

unsigned short int SumOfAllDigitsInTheString(char *string) {
  if (*string == '\0') {
    return (0);
  } else {
    if (*string >= 48 && *string <= 57) {
      return ((*string - 48) + SumOfAllDigitsInTheString(string + 1));
    } else {
      return (SumOfAllDigitsInTheString(string + 1));
    }
  }
}

void PrintOutTheSumOfAllDigitsInTheString(
    unsigned short int the_sum_of_all_digits_in_the_string) {
  printf("The sum of all digits in the string: %hu\n",
         the_sum_of_all_digits_in_the_string);
}

char *Reverse(char *it) {
  char *left_side = it;
  char *right_side = it + strlen(it) - 1;

  while (left_side < right_side) {
    char character = *left_side;
    *left_side = *right_side;
    *right_side = character;
    ++left_side;
    --right_side;
  }

  return it;
}

int main() {
  char str[SIZE]; // store maximum 99 characters
  char the_string[SIZE];

  // Qa.
  printf("Enter a string: ");
  scanf("%[^\n]s", str);
  strcpy(the_string, str);
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i])) {
      count++; // count number of alphabet characters
      /* Your Code here for conversion
       */
      if (i[str] >= 'a' && i[str] <= 'z') {
        i[str] = i[str] - 32;
      } else {
        if (i[str] >= 'A' && i[str] <= 'Z') {
          i[str] = i[str] + 32;
        }
      }
    }
  }

  printf("Number of alphabet characters: %d \n", count);
  printf("Converted string: %s\n", str);
  PrintOutTheSumOfAllDigitsInTheString(SumOfAllDigitsInTheString(str));
  printf("Modified string: %s\n", Reverse(the_string));

  return 0;
}
