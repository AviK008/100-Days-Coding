/*
Write a program to find the 1’s complement of a binary number and print it.
Date: 29/08/2026
*/

#include <stdio.h>
int main(){
    long long n, digit, result = 0, place = 1;

    printf("Enter A Binary Number: ");
    scanf("%lld", &n);

    while(n > 0){
        digit = n % 10;

        if(digit == 0){
            digit = 1;
        }
        else{
            digit = 0;
        }

        result = result + digit * place;
        place = place * 10;

        n = n / 10;
    }

    printf("%04lld", result);
    return 0;
}