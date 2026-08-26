/*
Write a program to check if a number is an Armstrong number.
Date: 26/08/2026
*/

#include <stdio.h>
int main(){
    int n, original, remainder, sum = 0, digits = 0;

    printf("Enter A Number To Check If It Is An Armstrong Number: ");
    scanf("%d", &n);

    original = n;

    
    int temp = n;
    while(temp != 0){             // Count the number of digits
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0){             // Calculate the sum of digits raised to the power of digits
        remainder = temp % 10;
        int power = 1;

        for(int i = 0; i < digits; i++){    // Raise the digit to the power of the number of digits
            power *= remainder;
        }
        sum += power; 
        temp /= 10; 
    }

    if(sum == original){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
}