/*  
Write a program to convert temperature from Celsius to Fahrenheit.
Date: 12/08/2026
*/

#include <stdio.h>
int main(){
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius*1.8) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}