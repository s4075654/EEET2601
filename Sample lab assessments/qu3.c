#include <stdio.h>

unsigned short int EnterAnIntegerBetween1And15Inclusively() {
    unsigned short int an_integer_between_1_and_15_inclusively;

    printf("Enter an integer between 1 and 15 inclusively: ");
    scanf("%hu", &an_integer_between_1_and_15_inclusively);

    return(an_integer_between_1_and_15_inclusively);
}

void DisplayTheSpaces(unsigned short int difference) {
    char space[] = "";

    for (unsigned short int integer = 1; integer < difference; integer++) {
        printf("%-3s", space);
    }
}

void NicelyDisplayAPattern(unsigned short int an_integer_between_1_and_15_inclusively) {
    
    printf(" ");
    for (unsigned short int row1 = 1; row1 <= an_integer_between_1_and_15_inclusively; row1++) printf("%-3hu", row1);
    for (unsigned short int column = 2; column <= an_integer_between_1_and_15_inclusively; column++) {
        printf("\n ");
        for (unsigned short int row = column; row >= 1; row--) printf("%-3hu", row);
        DisplayTheSpaces(an_integer_between_1_and_15_inclusively - column);
        if (an_integer_between_1_and_15_inclusively - column != 0) printf("%-3hu", an_integer_between_1_and_15_inclusively - column + 1);
    }
}

int main() {

    NicelyDisplayAPattern(EnterAnIntegerBetween1And15Inclusively());

    return(0);
}