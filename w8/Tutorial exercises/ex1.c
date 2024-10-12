#include <stdio.h>
// Qa. Define a function to print all array elements
void print_array(int array[], int size) {
  printf("All elements in normal order: \n");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void PrintTheArrayElementsInReverseOrder(int array[], int size) {
  printf("All elements in reverse order: \n");
  for (int i = size - 1; i >= 0; i--) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

unsigned short int ReturnTheMaximumElementInThatArray(int array[], int size) {

  printf("Maximum element in that array: \n");

  unsigned short int maximum_element = array[0];

  for (int i = 0; i < size; i++) {
    if (maximum_element < array[i])
      maximum_element = array[i];
  }

  return (maximum_element);
}

unsigned short int
Return1IfTheIntegerIsFoundInTheArrayAnd0Otherwise(int array[], int size,
                                                  int another_integer) {

  printf("1 if the integer is found in the array and 0 otherwise: \n");

  unsigned short int maximum_element = array[0];

  for (int i = 0; i < size; i++) {
    if (another_integer == array[i])
      return (1);
  }

  return (0);
}

int main() {

  // Declare and initialize the array
  int arr[] = {10, 8, 24, 8, 36};
  const int SIZE = sizeof(arr) / sizeof(arr[0]);
  int another_integer;

  // Call function (array is pass by ADDRESS as a pointer)
  print_array(arr, SIZE);
  PrintTheArrayElementsInReverseOrder(arr, SIZE);
  printf("%hu\n", ReturnTheMaximumElementInThatArray(arr, SIZE));
  scanf("%d", &another_integer);
  printf("%hu", Return1IfTheIntegerIsFoundInTheArrayAnd0Otherwise(
                    arr, SIZE, another_integer));

  return 0;
}