#include <stdio.h>

long long int TheSumOfAllIntegers(long long int n) {

    if (n == 1) return(n);
    else {
        if (n < 1) return(n + TheSumOfAllIntegers(n + 1));
        if (n > 1) return(n + TheSumOfAllIntegers(n - 1));
    }
}

void PrintOutTheSumOfAllIntegers() {
    long long int n;

    scanf("%lld", &n);
    printf("%lld\n", TheSumOfAllIntegers(n));
}

size_t TheSumOfDigitsOfAPositiveInteger(size_t n) {
    
    if (n < 10) return(n);
    else return(n % 10 + TheSumOfDigitsOfAPositiveInteger(n / 10));
}

void PrintOutTheDigitsOfAPositiveInteger(size_t n) {

    if (n < 10) {
        printf("%zu ", n);
        return;
    }
    PrintOutTheDigitsOfAPositiveInteger(n / 10);
    printf("%zu ", n % 10);
}

int main() {
    size_t n;

    PrintOutTheSumOfAllIntegers();
    scanf("%zu", &n);
    printf("%zu\n", TheSumOfDigitsOfAPositiveInteger(n));
    PrintOutTheDigitsOfAPositiveInteger(n);
    
    return(0);
}