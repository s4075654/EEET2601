#include <stdio.h>
#include <stdlib.h>

long long int *PromptTheUserToEnterThreeIntegerNumbers() {
  long long int *integer_numbers =
      (long long int *)malloc(3 * sizeof(long long int));

  printf("Enter three integer numbers: ");
  for (unsigned short int integer_number = 0; integer_number < 3;
       integer_number++)
    scanf("%lld", &integer_numbers[integer_number]);

  return (integer_numbers);
}

long long int TheSmallestValueAmongThem(long long int *integer_numbers) {
  long long int the_smallest_value_among_them = integer_numbers[0];

  for (unsigned short int integer_number = 1; integer_number < 3;
       integer_number++)
    if (integer_numbers[integer_number] < the_smallest_value_among_them)
      the_smallest_value_among_them = integer_numbers[integer_number];

  return (the_smallest_value_among_them);
}

int main() {
  long long int *integer_numbers = PromptTheUserToEnterThreeIntegerNumbers();
  printf("%lld", TheSmallestValueAmongThem(integer_numbers));

  free(integer_numbers);
  return (0);
}