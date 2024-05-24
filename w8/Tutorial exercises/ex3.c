#include <stdio.h>

unsigned short int IsAPrimeNumberOrNot(long long int a_given_integer) {

    if (a_given_integer <= 1) return(0);
    for (long long int number_from_two_to_given_integer = 2; number_from_two_to_given_integer * number_from_two_to_given_integer <= a_given_integer; number_from_two_to_given_integer++) if (a_given_integer % number_from_two_to_given_integer == 0) return(0);
    return(1);
}

int main() {
    long long int a_given_integer;

    scanf("%lld", &a_given_integer);
    printf("%hu", IsAPrimeNumberOrNot(a_given_integer));

    return(0);
}