#include <stdio.h>

ssize_t GetAnIntegerFromTheUser() {
    ssize_t an_integer;

    printf("Input an integer: ");
    scanf("%zd", &an_integer);

    return(an_integer);
}

unsigned char CalculateTheSumOfAllTheDigitsInThatInteger(ssize_t an_integer) {
    if (an_integer <= 9) {
        return(an_integer);
    }
    else {
        return(an_integer % 10 + CalculateTheSumOfAllTheDigitsInThatInteger(an_integer / 10));
    }
}

int main() {

    printf("The sum of all the digits in that integer: %hhu\n", CalculateTheSumOfAllTheDigitsInThatInteger(GetAnIntegerFromTheUser()));

    return(0);
}