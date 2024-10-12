#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int TheSumOfAllIntegers(long long int n) {
  long long int the_sum_of_all_integers = 0;

  while (n < 1) {
    the_sum_of_all_integers += n;
    n++;
  }
  while (n > 1) {
    the_sum_of_all_integers += n;
    n--;
  }
  if (n == 1)
    return (the_sum_of_all_integers + n);
}

void PrintOutTheSumOfAllIntegers() {
  long long int n;

  scanf("%lld", &n);
  printf("%lld\n", TheSumOfAllIntegers(n));
}

size_t TheSumOfDigitsOfAPositiveInteger(size_t n) {
  size_t the_sum_of_digits_of_a_positive_integer = 0, positive_integer = n,
         digits = 0;

  while (n != 0) {
    digits++;
    n /= 10;
  }
  for (unsigned long long int digit = digits; digit >= 1; digit--) {
    the_sum_of_digits_of_a_positive_integer += positive_integer % 10;
    positive_integer /= 10;
  }

  return (the_sum_of_digits_of_a_positive_integer);
}

void PrintOutTheDigitsOfAPositiveInteger(size_t n) {
  size_t positive_integer = n, digits = 0;

  while (n != 0) {
    digits++;
    n /= 10;
  }

  char digits_of_a_positive_integer[digits + 1];

  sprintf(digits_of_a_positive_integer, "%zu", positive_integer);
  for (unsigned long long int character = 0; character < digits; character++)
    printf("%c ", digits_of_a_positive_integer[character]);
}

void PrintOutAllCharactersOfAStringUsingRecursion(
    char *a_string, unsigned long long int character) {

  if (character == strlen(a_string))
    return;
  printf("%c", a_string[character]);
  PrintOutAllCharactersOfAStringUsingRecursion(a_string, character + 1);
}

int main() {
  size_t n, length = 0;
  char *a_string = NULL;

  PrintOutTheSumOfAllIntegers();
  scanf("%zu", &n);
  printf("%zu\n", TheSumOfDigitsOfAPositiveInteger(n));
  PrintOutTheDigitsOfAPositiveInteger(n);
  while (getchar() != '\n')
    ;
  printf("\n");
  getline(&a_string, &length, stdin);
  PrintOutAllCharactersOfAStringUsingRecursion(a_string, 0);
  free(a_string);

  return (0);
}