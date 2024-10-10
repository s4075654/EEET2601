#include <math.h>
#include <stdio.h>

long long int
ReturnsAnotherIntegerWithItsDigitsReversed(long long int an_integer) {
  long long int another_integer = 0, an_integer_s_copy = an_integer;
  size_t digits = 0;

  do {
    digits++;
    an_integer /= 10;
  } while (an_integer != 0);

  for (unsigned long long int digit = digits; digit >= 1; digit--) {
    another_integer += (an_integer_s_copy % 10) * pow(10, digit - 1);
    an_integer_s_copy /= 10;
  }

  return (another_integer);
}

int main() {
  long long int an_integer;
  scanf("%lld", &an_integer);
  printf("%lld", ReturnsAnotherIntegerWithItsDigitsReversed(an_integer));

  return (0);
}