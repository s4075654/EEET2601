#include <stdio.h>

unsigned short int AskTheUserToInputAValidNumberFrom1To10Inclusively() {
    unsigned short int a_valid_number_from_1_to_10_inclusively;

    do {
        printf("Input a valid number from 1 to 10 inclusively: ");
        scanf("%hu", &a_valid_number_from_1_to_10_inclusively);
        if (a_valid_number_from_1_to_10_inclusively < 1 || a_valid_number_from_1_to_10_inclusively > 10) {
            printf("an error message\n");
            while (getchar() != '\n');
            continue;
        }
        else break;
    } while (1);

    return(a_valid_number_from_1_to_10_inclusively);
}

void PrintOutTheMultiplicationTable(unsigned short int a_valid_number_from_1_to_10_inclusively) {

    printf("  x |");
    for (unsigned short int first_row = 1; first_row <= a_valid_number_from_1_to_10_inclusively; first_row++) printf("%4hu", first_row);
    printf("\n ");
    for (unsigned short int hyphens = 0; hyphens <= a_valid_number_from_1_to_10_inclusively; hyphens++) printf("----");
    printf("\n");

    unsigned short int multiplication_table[a_valid_number_from_1_to_10_inclusively][a_valid_number_from_1_to_10_inclusively];

    for (unsigned short int row = 1; row <= a_valid_number_from_1_to_10_inclusively; row++) {
        printf("%3hu |", row);
        for (unsigned short int column = 1; column <= a_valid_number_from_1_to_10_inclusively; column++) {
            multiplication_table[row][column] = row * column;
            printf("%4hu", multiplication_table[row][column]);
        }
        printf("\n");
    }
}

int main() {

    PrintOutTheMultiplicationTable(AskTheUserToInputAValidNumberFrom1To10Inclusively());

    return(0);
}