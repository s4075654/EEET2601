#include <stdio.h>
#include <stdlib.h>

size_t AcceptAStringAndReturnNumberOfAlphabeticalCharacters(char *a_string) {

  if (*a_string == '\0') {
    return (0);
  } else {
    if (*a_string >= 'a' && *a_string <= 'z' ||
        *a_string >= 'A' && *a_string <= 'Z') {
      return (1 + AcceptAStringAndReturnNumberOfAlphabeticalCharacters(
                      a_string + 1));
    } else {
      return (
          AcceptAStringAndReturnNumberOfAlphabeticalCharacters(a_string + 1));
    }
  }
}

size_t AcceptAStringWhichConsistsOfOnlyDigitsAndReturnItsValueUsingRecursion(
    char *a_string_which_consists_of_only_digits, unsigned long long int size) {

  if (size == 0) {
    return (*a_string_which_consists_of_only_digits - 48);
  } else {
    return (
        *a_string_which_consists_of_only_digits - 48 +
        AcceptAStringWhichConsistsOfOnlyDigitsAndReturnItsValueUsingRecursion(
            a_string_which_consists_of_only_digits - 1, size - 1) *
            10);
  }
}

_Bool AcceptTwoArraysNamelyArr1(ssize_t *arr1, ssize_t *arr2,
                                unsigned long long int size1,
                                unsigned long long int size2) {
  _Bool found = 0;

  for (unsigned long long int element_of_arr1 = 0; element_of_arr1 < size1;
       ++element_of_arr1) {
    for (unsigned long long int element_of_arr2 = 0; element_of_arr2 < size2;
         ++element_of_arr2) {
      if (element_of_arr1[arr1] == element_of_arr2[arr2]) {
        found = 1;
      }
    }
    if (found == 0) {
      return (found);
    } else {
      found = 0;
    }
  }

  return (1);
}

int main() {
  char string[] = "predefined values";
  printf("Number of alphabetical characters (a-z, A-Z) in that string: %zu\n",
         AcceptAStringAndReturnNumberOfAlphabeticalCharacters(string));

  char array[] = "3313435";
  unsigned long long int size = sizeof(array) / sizeof(0 [array]);
  char *last_digit = &(size - 2)[array];
  printf("Its value: %zu\n",
         AcceptAStringWhichConsistsOfOnlyDigitsAndReturnItsValueUsingRecursion(
             last_digit, size - 2));

  ssize_t arr1[] = {3, 3, 1, 3};
  unsigned long long int size1 = sizeof(arr1) / sizeof(0 [arr1]);
  ssize_t arr2[] = {4, 3, 5, 1};
  unsigned long long int size2 = sizeof(arr2) / sizeof(0 [arr2]);
  printf("1 if all elements of arr1 are found in arr2, 0 otherwise: %hhu",
         AcceptTwoArraysNamelyArr1(arr1, arr2, size1, size2));

  return (0);
}