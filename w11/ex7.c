#include <stdio.h>

typedef struct {
  long long int hour, minute, second;
} time;

long double PrintOutTheirDifference(time time_value_one, time time_value_two) {
  long double first_time = time_value_one.hour +
                           (long double)time_value_one.minute / 60 +
                           (long double)time_value_one.second / 3600;
  long double second_time = time_value_two.hour +
                            (long double)time_value_two.minute / 60 +
                            (long double)time_value_two.second / 3600;

  return (first_time - second_time);
}

long double PrintOutTheLatestTime(time *an_array_of_4_time_values) {
  long double times[4];

  for (char time = 0; time < 4; time++)
    times[time] = an_array_of_4_time_values[time].hour +
                  (long double)an_array_of_4_time_values[time].minute / 60 +
                  (long double)an_array_of_4_time_values[time].second / 3600;

  long double latest_time = times[0];

  for (char value = 0; value < 4; value++)
    if (latest_time < times[value])
      latest_time = times[value];

  return (latest_time);
}

void PrintOutAllTimeValuesOfTheArrayWhichHaveThatHourValue(
    time *an_array_of_4_time_values) {
  long long int hour_value;

  printf("Input an hour value: ");
  scanf("%lld", &hour_value);
  for (char time_value = 0; time_value < 4; time_value++) {
    if ((an_array_of_4_time_values[time_value].hour == hour_value) ||
        (an_array_of_4_time_values[time_value].minute == hour_value) ||
        (an_array_of_4_time_values[time_value].second == hour_value)) {
      printf("%lld:%lld:%lld", an_array_of_4_time_values[time_value].hour,
             an_array_of_4_time_values[time_value].minute,
             an_array_of_4_time_values[time_value].second);
    }
  }
}

int main() {
  time time_value_one, time_value_two;
  time an_array_of_4_time_values[4];

  printf("Input two time values: ");
  scanf("%lld:", &time_value_one.hour);
  scanf("%lld:", &time_value_one.minute);
  scanf("%lld", &time_value_one.second);
  an_array_of_4_time_values[0] = time_value_one;
  scanf(" %lld:", &time_value_two.hour);
  scanf("%lld:", &time_value_two.minute);
  scanf("%lld", &time_value_two.second);
  an_array_of_4_time_values[1] = time_value_two;
  printf("%.2Lf\n", PrintOutTheirDifference(time_value_one, time_value_two));
  printf("Input values for two more time variables: ");
  scanf("%lld:", &an_array_of_4_time_values[2].hour);
  scanf("%lld:", &an_array_of_4_time_values[2].minute);
  scanf("%lld", &an_array_of_4_time_values[2].second);
  scanf(" %lld:", &an_array_of_4_time_values[3].hour);
  scanf("%lld:", &an_array_of_4_time_values[3].minute);
  scanf("%lld", &an_array_of_4_time_values[3].second);
  printf("%Lf\n", PrintOutTheLatestTime(an_array_of_4_time_values));
  PrintOutAllTimeValuesOfTheArrayWhichHaveThatHourValue(
      an_array_of_4_time_values);

  return (0);
}