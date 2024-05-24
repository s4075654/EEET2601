#include <stdio.h>

int main() {
    int arr[3];
    
    printf("Enter three integers: ");
    for (int i = 0; i < 3; i++) scanf("%d", &arr[i]);
    int temp = arr[0];
    for (int i = 0; i < 3; i++) {
        if (arr[i] < temp) temp = arr[i];
    }
    printf("The smallest integer: %d\n", temp);
    return(0);
}