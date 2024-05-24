#include <stdio.h>

typedef struct {
    unsigned char hour;
    unsigned char minute;
    unsigned char second;
} time;

long double DecimalPoint(time time_value) {
    
    return((long double)time_value.hour + (long double)time_value.minute / 60 + (long double)time_value.second / 3600);
}

void AskTheUserToInputTwoTimeValuesInHh() {
    time time_value_1, time_value_2;

    printf("Input two time values in hh:mm:ss format: ");
    scanf("%hhu:%hhu:%hhu %hhu:%hhu:%hhu", &time_value_1.hour, &time_value_1.minute, &time_value_1.second, &time_value_2.hour, &time_value_2.minute, &time_value_2.second);

    printf("Their difference: %.2Lf\n", DecimalPoint(time_value_1) - DecimalPoint(time_value_2));
}

void CreateAnArrayOf4TimeValuesAndAskTheUserToInputValues4ThemWithCorrect4matAbove() {
    time time_values[4];
    unsigned char latest_time = 0;

    for (unsigned char time_value = 0; time_value < 4; ++time_value) {
        printf("Input value for time value %hhu: ", time_value + 1);
        scanf("%hhu:%hhu:%hhu", &time_value[time_values].hour, &time_value[time_values].minute, &time_value[time_values].second);
        if (DecimalPoint(time_value[time_values]) > DecimalPoint(latest_time[time_values])) {
            latest_time = time_value;
        }
    }

    printf("The latest time: %hhu:%hhu:%hhu\n", latest_time[time_values].hour, latest_time[time_values].minute, latest_time[time_values].second);
}

int main() {

    AskTheUserToInputTwoTimeValuesInHh();
    CreateAnArrayOf4TimeValuesAndAskTheUserToInputValues4ThemWithCorrect4matAbove();

    return(0);
}