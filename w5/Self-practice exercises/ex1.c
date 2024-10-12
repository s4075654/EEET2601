#include <stdio.h>

unsigned short int InputYourBirthdate() {
  char birthdate[10];
  unsigned short int birthyear = 0;

  printf("Input your birthdate in \"dd/mm/yyyy\" format: ");
  scanf("%10s", birthdate);

  return ((birthdate[6] - '0') * 1000 + (birthdate[7] - '0') * 100 +
          (birthdate[8] - '0') * 10 + birthdate[9] - '0');
}

ssize_t CurrentYear() {
  ssize_t current_year = 0;

  printf("Input current year: ");
  scanf("%zd", &current_year);

  return (current_year);
}

int main() {

  printf("Your age: %zu\n", CurrentYear() - InputYourBirthdate());

  return (0);
}
