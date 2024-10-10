#include <stdio.h>

typedef struct {
  int hour;
  int minute;
  int second;
} time;

long double Decimal(time value) {

  return ((long double)value.hour + (long double)value.minute / 60 +
          (long double)value.second / 3600);
}

int main() {
  time value_1, value_2;
  time time_values[4];
  int latest_time = 0;

  printf("Input two time values in hh:mm:ss format: ");
  scanf("%d:%d:%d %d:%d:%d", &value_1.hour, &value_1.minute, &value_1.second,
        &value_2.hour, &value_2.minute, &value_2.second);
  printf("Difference: %.2Lf\n", Decimal(value_1) - Decimal(value_2));

  for (int i = 0; i < 4; i++) {
    printf("Input time value %d in hh:mm:ss format: ", i + 1);
    scanf("%d:%d:%d", &time_values[i].hour, &time_values[i].minute,
          &time_values[i].second);
    if (Decimal(time_values[latest_time]) < Decimal(time_values[i])) {
      latest_time = i;
    }
  }
  printf("The latest time: %d:%d:%d\n", time_values[latest_time].hour,
         time_values[latest_time].minute, time_values[latest_time].second);

  return (0);
}