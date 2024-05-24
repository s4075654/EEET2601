#include <stdio.h>
#include <stdlib.h>

long long int ReturnItsAverageValue(long long int* an_array, unsigned long long int size) {
    long long int values = 0;

    for (unsigned long long int value = 0; value < size; value++) values += an_array[value];

    return(values / size);
}

size_t ReturnSumOfEvenDigitsInTheString(char* a_string) {
    size_t sum_of_even_digits_in_the_string = 0;

    for (unsigned long long int digit = 0; a_string[digit] != '\0'; digit++) if (((a_string[digit] - '0') % 2 == 0) && (a_string[digit] >= 48) && (a_string[digit] <= 57)) sum_of_even_digits_in_the_string += (a_string[digit] - '0');

    return(sum_of_even_digits_in_the_string);
}

void PrintOutEachWord(char* a_string) {
    _Bool InTheMiddleOf;

    for (unsigned long long int character = 0; a_string[character] != '\0'; character++) {
        if (a_string[character] != ' ') {
            InTheMiddleOf = 0;
            printf("%c", a_string[character]);
        }
        else {
            if (!InTheMiddleOf) printf("\n");
            InTheMiddleOf = 1;
        }
    }
}

void PrintOutTheLongestWordOfThatString(char* a_string, unsigned long long int length) {
    unsigned long long int count = 0, beginning = 0, true_beginning = 0, max_count = 0;

    for (unsigned long long int character = 0; character <= length; character++) {
        if ((a_string[character] != ' ') && (a_string[character] != '\0')) {
            count++;
            if ((a_string[character] != '\0') && (a_string[character] != ' ') && (a_string[character - 1] == ' ')) beginning = character;
        }
        else {
            if (max_count < count) {
                max_count = count;
                true_beginning = beginning;
            }
            count = 0;
        }
    }
    for (unsigned long long int character = true_beginning; (a_string[character] != ' ') && (a_string[character] != '\0'); character++) printf("%c", a_string[character]);
}

int main() {
    unsigned long long int size;
    char* a_string = NULL;
    size_t length = 0;

    scanf("%llu", &size);

    long long int an_array[size];

    for (unsigned long long int value = 0; value < size; value++) {
        scanf("%lld", &an_array[value]);
        while (getchar() != '\n');
    }
    printf("%lld\n", ReturnItsAverageValue(an_array, size));
    getline(&a_string, &length, stdin);
    printf("%zu\n", ReturnSumOfEvenDigitsInTheString(a_string));
    PrintOutEachWord(a_string);
    printf("\n");
    size = 0;
    while (a_string[size] != '\0') size++;
    PrintOutTheLongestWordOfThatString(a_string, size);
    free(a_string);

    return(0);
}