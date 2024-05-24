#include <stdio.h>

size_t GetAnAmountInVND() {
    size_t amount_in_VND;

    printf("Input an amount in VND: ");
    scanf("%zu", &amount_in_VND);

    return(amount_in_VND);
}

long double ConvertItToUSD(unsigned long long int amount_in_VND) {
    return (amount_in_VND / 23150);
}

int main() {
    
    printf("USD: %Lf\n", ConvertItToUSD(GetAnAmountInVND()));

    return(0);
}