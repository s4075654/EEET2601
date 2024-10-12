#include <stdio.h>

unsigned long long int PromptTheUserToInputAPositiveInteger() {
  unsigned long long int positive_integer;

  printf("Input a positive integer: ");
  scanf("%llu", &positive_integer);

  return (positive_integer);
}

unsigned long long int SumOfAllDigits(unsigned long long int positive_integer) {
  unsigned long long int sum_of_all_digits = 0;

  while (positive_integer != 0) {
    sum_of_all_digits += positive_integer % 10;
    positive_integer /= 10;
  }

  return (sum_of_all_digits);
}

int main() {

  printf("%llu", SumOfAllDigits(PromptTheUserToInputAPositiveInteger()));

  return (0);
}