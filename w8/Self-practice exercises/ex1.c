#include <stdio.h>

char CanFormATriangle(long double float_number_one, long double float_number_two, long double float_number_three) {

    if (float_number_one <= float_number_two + float_number_three && float_number_two <= float_number_one + float_number_three && float_number_three <= float_number_one + float_number_two) return(1);
    else return(0);
}

int main() {
    long double float_number_one, float_number_two, float_number_three;

    scanf("%Lf", &float_number_one);
    scanf("%Lf", &float_number_two);
    scanf("%Lf", &float_number_three);
    printf("%hu", CanFormATriangle(float_number_one, float_number_two, float_number_three));

    return(0);
}