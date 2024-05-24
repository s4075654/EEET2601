#include <stdio.h>
#include <stdlib.h>

long double SumOfElementsGreaterThanOrEqualTo50(int* array, int size) {
    if (size == 0) return(0);
    if (*array >= 50) return(*array + SumOfElementsGreaterThanOrEqualTo50(array + 1, size - 1));
    else return(SumOfElementsGreaterThanOrEqualTo50(array + 1, size - 1));
}

int main() {
    int arr[] = {58, 47, 64, 73, 94, 88};
    int* array = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    int number_of_elements_greater_than_or_equal_to_50 = 0;
    int times = 0, an_integer, difference, index;

    while(times < size) {
        if (*array >= 50) number_of_elements_greater_than_or_equal_to_50++;
        array++;
        times++;
    }

    array = arr;
    printf("The average of elements which are greater than or equal to 50: %Lf\n", SumOfElementsGreaterThanOrEqualTo50(array, size) / number_of_elements_greater_than_or_equal_to_50);
    
    printf("Input an integer: ");
    scanf("%d", &an_integer);
    difference = abs(an_integer - *array);
    times = 0;
    while (times < size) {
        if (abs(an_integer - *array) < difference) {
            difference = abs(an_integer - *array);
            index = times;
        }
        times++;
        array++;
    }

    printf("The closest element with the inputted integer within the array: %d", arr[index]);

    return(0);
}
