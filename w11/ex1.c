#include <stdio.h>

int main() {
    int num1, num2;

    //Input values
    printf("Enter 2 integers (weighted 60%%, 40%%): ");
    scanf("%d %d", &num1, &num2);

    //Calculate the weighted average
    float avg = num1 * 60.0/100 + num2 * 40.0/100;
    printf("Weighted average is %.2f \n", avg);
 
    return 0;
}
