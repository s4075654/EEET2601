#include <stdio.h>
#include <stdlib.h>

ssize_t *CreateAnArrayOf4Integers() {
  ssize_t *an_array_of_4_integers = (ssize_t *)malloc(4 * sizeof(ssize_t));

  return (an_array_of_4_integers);
}

ssize_t *AskTheUser2EnterValues4Them(ssize_t *an_array_of_4_integers) {

  printf("Enter values for them: ");
  for (unsigned char integer = 0; integer < 4; ++integer) {
    scanf("%zd", &integer[an_array_of_4_integers]);
  }

  return (an_array_of_4_integers);
}

void PrintTheLastToFirstElementOfTheArrayIn1Line(
    ssize_t *an_array_of_4_integers) {

  printf("The last to first element of the array in one line: ");
  for (char element = 3; element >= 0; --element) {
    printf("%zd ", element[an_array_of_4_integers]);
  }
  printf("\n");
}

void PrintOutElementsWhichAreEvenValues(ssize_t *an_array_of_4_integers) {

  printf("Elements which are even values: ");
  for (unsigned char element = 0; element < 4; ++element) {
    if (element[an_array_of_4_integers] % 2 == 0) {
      printf("%zd ", element[an_array_of_4_integers]);
    }
  }
  printf("\n");
}

ssize_t *SortTheArrayInAscendingOrderUsingTheSelectionSortAlgorithm(
    ssize_t *an_array_of_4_integers) {

  for (unsigned char element = 0; element < 4; ++element) {
    for (unsigned char ascended_element = element + 1; ascended_element < 4;
         ++ascended_element) {
      if (element[an_array_of_4_integers] >
          ascended_element[an_array_of_4_integers]) {
        ssize_t order = element[an_array_of_4_integers];
        element[an_array_of_4_integers] =
            ascended_element[an_array_of_4_integers];
        ascended_element[an_array_of_4_integers] = order;
      }
    }
  }

  return (an_array_of_4_integers);
}

void PrintTheArray(ssize_t *an_array_of_4_integers) {

  printf("Printing the array: ");
  for (unsigned char element = 0; element < 4; ++element) {
    printf("%zd ", element[an_array_of_4_integers]);
  }
  printf("\n");
  free(an_array_of_4_integers);
}

int main() {

  ssize_t *an_array_of_4_integers =
      AskTheUser2EnterValues4Them(CreateAnArrayOf4Integers());
  PrintTheLastToFirstElementOfTheArrayIn1Line(an_array_of_4_integers);
  PrintOutElementsWhichAreEvenValues(an_array_of_4_integers);
  PrintTheArray(SortTheArrayInAscendingOrderUsingTheSelectionSortAlgorithm(
      an_array_of_4_integers));

  return (0);
}