#include <stdio.h>
#include <stdlib.h>
#include <time.h>

size_t *AskTheUserToInputAPositiveInteger() {
  size_t n, *array_of_10_integers = (size_t *)malloc(10 * sizeof(size_t));

  printf("Input a positive number: ");
  scanf("%zu", &n);
  srand(time(NULL));
  for (unsigned long long int integer = 0; integer < 10; integer++)
    array_of_10_integers[integer] = rand() % n;

  return (array_of_10_integers);
}

void PrintOutTheirSmallestAndLargestValues(size_t *array_of_10_integers) {
  size_t their_smallest_value = array_of_10_integers[0],
         their_largest_value = array_of_10_integers[0];

  for (unsigned long long int integer = 0; integer < 10; integer++) {
    if (their_largest_value < array_of_10_integers[integer])
      their_largest_value = array_of_10_integers[integer];
    if (their_smallest_value > array_of_10_integers[integer])
      their_smallest_value = array_of_10_integers[integer];
  }
  printf("%zu\n", their_smallest_value);
  printf("%zu", their_largest_value);
}

int main() {

  PrintOutTheirSmallestAndLargestValues(AskTheUserToInputAPositiveInteger());

  return (0);
}