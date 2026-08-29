/*
Write a program to find the product of odd digits of a number.
Date: 29/08/2026
*/

#include <stdio.h>
int main(){
    long long n, digit;
    long long product = 1;

    printf("Enter A Number: ");
    scanf("%lld", &n);

    while(n > 0){
        digit = n % 10;

        if(digit % 2 != 0){
            product = product * digit;
        }
        n = n / 10;
    }

    printf("%lld", product);
    return 0;
}