#include <stdio.h>

long long int ReturnTheSumOfAllElements(long long int *an_array_of_integers,
                                        unsigned long long int size) {

  if (size == 0)
    return (an_array_of_integers[0]);
  return (an_array_of_integers[size - 1] +
          ReturnTheSumOfAllElements(an_array_of_integers, size - 1));
}

int main() {
  unsigned long long int size;

  scanf("%llu", &size);

  long long int an_array_of_integers[size];

  for (unsigned long long int integer = 0; integer < size; integer++)
    scanf("%lld", &an_array_of_integers[integer]);
  printf("%lld", ReturnTheSumOfAllElements(an_array_of_integers, size) - 1);

  return (0);
}