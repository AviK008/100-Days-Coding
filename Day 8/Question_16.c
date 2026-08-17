/*
Write a program to input three numbers and find the largest among them using if-else.
Date: 17/08/2026
*/

#include <stdio.h>
int main() {
    int n1, n2, n3;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);
    
    printf("Enter the third number: ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf("%d is the largest", n1);
    }
    else if (n2 >= n1 && n2 >= n3) {
        printf("%d is the largest", n2);
    }
    else {
        printf("%d is the largest", n3);
    }
    return 0;
}