#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long double AskTheUserToInputAPositiveNumberN() {
    long double n = 0;

    printf("Input a positive number n: ");
    scanf("%Lf", &n);

    return(n);
}

size_t* CreateAnArrayOf10IntegersWithValuesAreRandomNumbersFrom0ToNInclusively(long double n) {
    size_t *an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively = (size_t*)malloc(10 * sizeof(size_t));
    srandom(time(NULL));

    for (unsigned char value = 0; value < 10; ++value) {
        value[an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively] = random() % ((size_t)n + 1);
    }

    return(an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively);
}

void PrintOutAllElement(size_t *an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively) {
    
    printf("All elements: ");
    for (unsigned char element = 0; element < 10; ++element) {
        printf("%zu ", element[an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively]);
    }
    printf("\n");
}

long double TheFirst(size_t *an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively) {
    long double the_average_value = 0;

    for (unsigned char element = 0; element < 5; ++element) {
        the_average_value += element[an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively];
    }

    return(the_average_value / 5);
}

long double SecondHalfOfTheArray(size_t *an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively) {
    long double the_average_value = 0;

    for (unsigned char element = 5; element < 10; ++element) {
        the_average_value += element[an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively];
    }

    return(the_average_value / 5);
}

int main() {
    size_t *an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively = CreateAnArrayOf10IntegersWithValuesAreRandomNumbersFrom0ToNInclusively(AskTheUserToInputAPositiveNumberN());

    PrintOutAllElement(an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively);
    printf("The average values of the first and second halves of the array: %Lf; %Lf", TheFirst(an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively), SecondHalfOfTheArray(an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively));

    free(an_array_of_10_integers_with_values_are_random_numbers_from_0_to_n_inclusively);
    return(0);
}