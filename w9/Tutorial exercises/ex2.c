#include <stdio.h>
#include <stdbool.h>

bool isALeapYearOrNot(long long int year_number) {
    
    if (year_number % 400 == 0 || (year_number % 4 == 0 && year_number % 100 != 0)) return(true);
    else return(false);
}

int main() {
    long long int year_number;

    scanf("%lld", &year_number);
    if (isALeapYearOrNot(year_number)) printf("It is a leap year.");
    else printf("It is not a leap year.");

    return(0);
}