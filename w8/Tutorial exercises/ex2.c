#include <stdio.h>

unsigned long long int intpow(long long int base, unsigned long long exponent) {

    if (exponent == 0) return(1);
    else return(base * intpow(base, exponent - 1));
}

int main() {
    long long int base;
    unsigned long long int exponent;

    scanf("%lld", &base);
    scanf("%llu", &exponent);
    printf("%llu", intpow(base, exponent));

    return(0);
}