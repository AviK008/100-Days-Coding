/*
Write a program to take a number as input and print its equivalent binary representation.
Date: 25/08/2026
*/

#include <stdio.h>
int main(){
    int n;

    printf("Enter A Number To Convert To Binary: ");
    scanf("%d", &n);

    if (n == 0){                        // Special case for 0
        printf("0\n");
        return 0;
    }

    long long binary = 0;
    long long place = 1;

    while (n > 0){                      // Converting decimal to binary
        int rem = n % 2;
        binary += rem * place;          
        place *= 10;                    
        n /= 2;                         
    }

    printf("%lld\n", binary);
    return 0;
}