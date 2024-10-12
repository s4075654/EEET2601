#include <stdio.h>
#include <string.h>

int main() {
  char *months[] = {"January",   "February", "March",    "April",
                    "May",       "June",     "July",     "August",
                    "September", "October",  "November", "December"};
  char source[11];
  char dest[17];
  int month = 0;
  char year[5];
  char *yyyy = year;

  printf("Enter a date in dd/mm/yyyy: ");
  scanf("%10s", source);

  for (int i = 0; i < 10; i++) {
    if (i <= 1) {
      dest[i] = source[i];
      dest[i + 1] = '\0';
    }
    if (source[i] == '/') {
      strcat(dest, " ");
    }
    if (i == 3) {
      month += (source[i] - 48) * 10;
    }
    if (i == 4) {
      month += source[i] - 48;
      strcat(dest, months[month - 1]);
    }
    if (i >= 6 && i <= 9) {
      *yyyy = source[i];
      yyyy++;
    }
    if (i == 9) {
      year[4] = '\0';
      strcat(dest, year);
    }
  }

  printf("Converted format: %s", dest);

  return (0);
}