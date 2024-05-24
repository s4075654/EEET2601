#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned char* CreateAnArrayOf5RandomIntegersBetween30And100Inclusively() {
    unsigned char* an_array_of_5_random_integers_between_30_and_100_inclusively = (unsigned char*)malloc(5 * sizeof(unsigned char));

    srandom(time(NULL));
    for (unsigned char random_integer = 0; random_integer < 5; ++random_integer) {
        an_array_of_5_random_integers_between_30_and_100_inclusively[random_integer] = (random() % 71) + 30;
    }

    return(an_array_of_5_random_integers_between_30_and_100_inclusively);
}

unsigned char CountHowManyElementsAreGreaterThan50(unsigned char* an_array_of_5_random_integers_between_30_and_100_inclusively) {
    unsigned char elements_greater_than_50 = 0;

    printf("The first to last element of the array in one line: ");
    for (unsigned char element = 0; element < 5; ++element) {
        printf("%hhd ", element[an_array_of_5_random_integers_between_30_and_100_inclusively]);
        if (element[an_array_of_5_random_integers_between_30_and_100_inclusively] > 50) {
            ++elements_greater_than_50;
        }
    }

    return(elements_greater_than_50);
}

unsigned char TheSmallestElementInTheArray(unsigned char* an_array_of_5_random_integers_between_30_and_100_inclusively) {
    unsigned char the_smallest_element_in_the_array = an_array_of_5_random_integers_between_30_and_100_inclusively[0];

    for (unsigned char element = 1; element < 5; ++element) {
        if (element[an_array_of_5_random_integers_between_30_and_100_inclusively] < the_smallest_element_in_the_array) {
            the_smallest_element_in_the_array = element[an_array_of_5_random_integers_between_30_and_100_inclusively];
        }
    }
    free(an_array_of_5_random_integers_between_30_and_100_inclusively);

    return(the_smallest_element_in_the_array);
}

int main() {
    unsigned char *an_array_of_5_random_integers_between_30_and_100_inclusively = CreateAnArrayOf5RandomIntegersBetween30And100Inclusively();
    unsigned char elements_greater_than_50 = CountHowManyElementsAreGreaterThan50(an_array_of_5_random_integers_between_30_and_100_inclusively);
    unsigned char the_smallest_element_in_the_array = TheSmallestElementInTheArray(an_array_of_5_random_integers_between_30_and_100_inclusively);
    
    printf("\nThe number of elements greater than 50: %hhd\n", elements_greater_than_50);
    printf("The smallest element in the array: %hhd\n", the_smallest_element_in_the_array);

    return(0);
}