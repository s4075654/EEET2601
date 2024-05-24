#include <stdio.h>

void PrintTheArrayElements(int *array_element) {
    unsigned char element = 1;

    printf("The array elements in the normal order (first to last): ");
    while (element <= 5) {
        printf("%d ", *array_element);
        ++array_element;
        ++element;
    }
    printf("\n");

    --array_element;
    printf("The array elements in the reverse order (last to first): ");
    while (element > 1) {
        printf("%d ", *array_element);
        --array_element;
        --element;
    }
    printf("\n");
}

unsigned char TheSumOfAllElementsInTheArray(int *array_element) {
    unsigned char element = 1;
    int the_sum_of_all_elements_in_the_array = 0;

    while (element <= 5) {
        the_sum_of_all_elements_in_the_array += *array_element;
        ++array_element;
        ++element;
    }

    return(the_sum_of_all_elements_in_the_array);
}

int* ReverseTheElementsOfTheArray(int *array_element) {
    int element = 0;
    int *left_side = array_element;
    int *right_side = array_element + 4;

    while (left_side < right_side) {
        element = *left_side;
        *left_side = *right_side;
        *right_side = element;

        ++left_side;
        --right_side;
    }

    return(array_element);
}

int main() {
    int arr[] = {12, 7, -3, 4, 1};
    int *array_element = arr;

    PrintTheArrayElements(array_element);
    printf("The sum of all elements in the array: %hhu\n", TheSumOfAllElementsInTheArray(array_element));
    ReverseTheElementsOfTheArray(array_element);
    printf("The elements of the array: ");
    for (unsigned char element = 0; element < 5; ++element) {
        printf("%d ", element[arr]);
    }
    printf("\n");

    return(0);
}