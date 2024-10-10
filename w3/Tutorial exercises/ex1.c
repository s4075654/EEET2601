#include <math.h>
#include <stdio.h>

int main() {
  float result;

  do {
    printf("Enter final result [0-100]: ");
    scanf("%f", &result);
    if (result < 0 || result > 100) {
      printf("Invalid value! \n"); // invalid error
    }
  } while (result < 0 || result > 100);

  // Round and output grade band based on result ranges
  result = round(result); // round to nearest integer
  printf("Your final grade is ");
  if (result < 50) {
    printf("NN \n");
  } else if (result < 60) {
    printf("PA \n");
  }

  else if (result < 70)
    printf("CR.");
  else if (result < 80)
    printf("DI.");
  else {
    printf("HD \n");
  }

  return 0;
}