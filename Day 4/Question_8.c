/*  
Write a program to find and display the sum of the first n natural numbers.
Date: 13/08/2026
*/

#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}