#include <stdio.h>
#include <string.h>
#include <ctype.h>

int questionA(char *a_string) {
    int size = strlen(a_string);
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (isalpha(a_string[i])) {
            count++;
        }
    }

    return(count);
}

int questionB(char *a_string, int size) {
    
    if (size == 0) {
        return(*a_string - 48);
    }
    else {
        return(*a_string - 48 + (questionB(a_string - 1, size - 1) * 10));
    }
}

int questionC(int *arr1, int *arr2, int size1, int size2) {
    int found = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr1[j]) {
                found = 1;
            }
        }
        if (found == 0) {
            return(0);
        }
        else {
            found = 0;
        }
    }

    return(1);
}

int main() {

    char a[] = "12hello 34abc";
    char b[] = "2539";
    int size = sizeof(b) / sizeof(b[0]);
    char *bea = &b[size - 2];
    int arr1[] = {1, 3, 6, 2, 3};
    int arr2[] = {1, 3, 2, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Number of alphabetical characters: %d\n", questionA(a));
    printf("Value of string: %d\n", questionB(bea, size - 2));
    printf("1 if all elements of arr1 are found in arr2, 0 otherwise: %d\n", questionC(arr1, arr2, size1, size2));

    return(0);
}