#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long double SumFirstHalf(int *array) {
  static int count = 0;

  if (count < 5) {
    count++;
    return ((long double)*array + SumFirstHalf(array + 1));
  } else {
    return (0);
  }
}

long double SumSecondHalf(int *array) {
  static int count = 5;

  if (count < 10) {
    count++;
    return ((long double)*array + SumSecondHalf(array + 1));
  } else {
    return (0);
  }
}

int main() {
  int n;
  int array[10];

  printf("Input a positive number: ");
  scanf("%d", &n);

  srand(time(NULL));
  printf("All elements: ");
  for (int i = 0; i < 10; i++) {
    array[i] = rand() % (n + 1);
    printf("%d ", array[i]);
  }

  printf("\n");
  printf("Average value of the first half of the array: %Lf\n",
         SumFirstHalf(array) / 5);
  printf("Average value of the second half of the array: %Lf\n",
         SumSecondHalf(array + 5) / 5);

  return (0);
}