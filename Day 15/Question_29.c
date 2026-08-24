/*
Write a program to calculate the factorial of a number.
Date: 24/08/2026
*/

#include <stdio.h>
int main(){
    int n;
    long long factorial = 1; 

    printf("Enter A Number To Get It's Factorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        factorial *= i;
    }

    printf("%lld\n", factorial);
    return 0;
}