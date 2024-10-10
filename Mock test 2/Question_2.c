#include <stdio.h>
#include <stdlib.h>

int arr[] = {58, 47, 64, 73, 94, 88};

long double
CalculateTheAverageOfElementsWhichAreGreaterThanOrEqualTo50(int *array) {
  long long int the_sum_of_elements = 0;
  unsigned long long int
      number_of_elements_which_are_greater_than_or_equal_to_50 = 0;

  for (unsigned long long int element = 0; element < sizeof(arr) / 4;
       ++element) {
    if (*array >= 50) {
      the_sum_of_elements += *array;
      ++number_of_elements_which_are_greater_than_or_equal_to_50;
    }
    ++array;
  }

  return (
      (long double)the_sum_of_elements /
      (long double)number_of_elements_which_are_greater_than_or_equal_to_50);
}

int ClosestElementWithTheInputtedInteger(int *array) {
  int an_integer, difference, the_closest_element = *array;

  printf("Input an integer: ");
  scanf("%d", &an_integer);
  difference = abs(an_integer - *array);
  for (unsigned long long int element = 0; element < sizeof(arr) / 4;
       ++element) {
    if (abs(an_integer - *array) < difference) {
      difference = abs(an_integer - *array);
      the_closest_element = *array;
    }
    ++array;
  }

  return (the_closest_element);
}

int main() {
  int *array = arr;

  printf("%Lf\n",
         CalculateTheAverageOfElementsWhichAreGreaterThanOrEqualTo50(array));
  printf("%d", ClosestElementWithTheInputtedInteger(array));

  return (0);
}