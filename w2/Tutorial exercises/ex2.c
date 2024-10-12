#include <stdio.h>

size_t GetAnIntegerAsMinutes() {
  size_t minutes = 0;

  printf("Input an integer as minutes: ");
  scanf("%zu", &minutes);

  return (minutes);
}

typedef struct {
  size_t hours;
  unsigned char remaining_minutes;
} equivalent;

equivalent Calculate(size_t minutes) {
  if (minutes < 60) {
    return (equivalent){0, minutes};
  } else {
    return (equivalent){minutes / 60, minutes % 60};
  }
}

int main() {
  equivalent hours_and_remaining_minutes = Calculate(GetAnIntegerAsMinutes());
  if (hours_and_remaining_minutes.hours == 1) {
    printf("%zu hour ", hours_and_remaining_minutes.hours);
  } else {
    printf("%zu hours ", hours_and_remaining_minutes.hours);
  }
  if (hours_and_remaining_minutes.remaining_minutes == 1) {
    printf("and %u minute.\n", hours_and_remaining_minutes.remaining_minutes);
  } else {
    printf("and %u minutes.\n", hours_and_remaining_minutes.remaining_minutes);
  }

  return (0);
}