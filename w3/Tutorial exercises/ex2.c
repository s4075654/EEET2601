#include <stdio.h>

size_t positive_numbers = 0;

size_t GetASequenceOfPositiveIntegersFromTheUser() {
    ssize_t a_positive_integer = 0;

    printf("Input a sequence of positive integers: ");
    scanf("%zd", &a_positive_integer);
   
    return(a_positive_integer);
}

size_t ComputeTheirSum() {
    ssize_t a_positive_integer = GetASequenceOfPositiveIntegersFromTheUser();

    if (a_positive_integer < 0) {
        return 0;
    }
    else {
        if (a_positive_integer > 0) {
            positive_numbers += 1;
            return(a_positive_integer + ComputeTheirSum());
        }
        else {
            return(a_positive_integer + ComputeTheirSum());
        }
    }
}

int main() {
    
    printf("The sum: %zu.\n", ComputeTheirSum());
    printf("There are %zu positive numbers in the sequence.\n", positive_numbers);

    return(0);
}