#include <stdio.h>

int main() {
  unsigned long long int integer, sum = 0;

  printf("Input a positive integer: ");
  scanf("%llu", &integer);
  do {
    sum += integer % 10;
    integer /= 10;
  } while (integer != 0);
  printf("Sum of all the digits: %llu", sum);

  return (0);
}