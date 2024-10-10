#include <math.h>
#include <stdio.h>
#include <stdlib.h>

size_t ConvertAValidStringOfDigits(char *str) {
  size_t an_integer_value = 0;
  unsigned long long int length = 0, digit = 0;

  while (str[length] != '\0')
    length++;
  for (digit = 0; digit < length - 1; digit++) {

    if ((str[digit] < 48) || (str[digit] > 57))
      return (0);
    else
      an_integer_value += (str[digit] - '0') * pow(10, length - digit - 2);
  }

  return (an_integer_value);
}

int main() {
  char *str = NULL;
  size_t length = 0;

  getline(&str, &length, stdin);
  printf("%zu", ConvertAValidStringOfDigits(str));
  free(str);

  return (0);
}