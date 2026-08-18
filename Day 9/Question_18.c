/*
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A, 80-89: Grade B, 70-79: Grade C, 60-69: Grade D, below 60: Grade F.
Date: 18/06/2024
*/

#include <stdio.h>
int main() {
    float percentage;

    printf("Enter Percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100){
        printf("Grade A\n");
    }
    else if (percentage >= 80){
        printf("Grade B\n");
    }
    else if (percentage >= 70){
        printf("Grade C\n");
    }
    else if (percentage >= 60){
        printf("Grade D\n");
    }
    else if (percentage >= 0){
        printf("Grade F\n");
    }
    else{
        printf("Invalid percentage\n");
    }
    return 0;
}