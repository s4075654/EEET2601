#include <stdio.h>

int main() {
  int number, i, j, o = 1;
  char s[] = "";
  printf("Enter a number (1-15): ");
  scanf("%d", &number);

  // Print out the first line:
  printf("%2d", o);
  for (i = 2; i <= number; i++) {
    printf("%4d", i);
  }
  printf("\n");

  // Print out the following lines:
  for (i = 2; i <= number; i++) {
    printf("%2d", i);
    for (j = i - 1; j >= 1; j--) {
      printf("%4d", j);
    }
    for (j = 2; j <= number - i; j++)
      printf("%4s", s);
    if (number - i + 1 != 1)
      printf("%4d\n", number - i + 1);
  }
  printf("\n");
  return (0);
}