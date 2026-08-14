/*
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
Date: 15/08/2026
*/

#include <stdio.h>
int main(){
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0){
        printf("Positive\n");
    } 
    else{
        
    if (number < 0) {
        printf("Negative\n");
    } 
    else {
        printf("The number is zero\n");
    }
    }
    return 0;
}