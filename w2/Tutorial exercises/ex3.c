#include <math.h>
#include <stdio.h>

typedef struct {
  long double x;
  long double y;
} two_numbers;

two_numbers GetTwoNumbers() {
  two_numbers xy;

  printf("Input two numbers x, y: ");
  scanf("%Lf", &xy.x);
  scanf("%Lf", &xy.y);

  return (xy);
}

long double FindXy(two_numbers xy) { return (pow(xy.x, xy.y)); }

int main() {

  printf("xy is: %Lf\n", FindXy(GetTwoNumbers()));

  return (0);
}