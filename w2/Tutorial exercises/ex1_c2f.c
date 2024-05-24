#include <stdio.h>

int main(){
    float c_temp, f_temp;

    //Input C temperature
    printf("Enter C temperature: ");
    scanf("%f", &c_temp);

    //Convert to F temperature, and print out
    f_temp = c_temp * 9/5 + 32;
    printf("Converted to F temperature: %.2f \n", f_temp);
    
    return 0;
}