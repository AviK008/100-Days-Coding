/*
Write a program to check if a number is a palindrome.
Date: 25/08/2026
*/

#include <stdio.h>
int main() {
    int n, original, reversed = 0, remainder;
    
    printf("Enter A Number To Check If It Is Palindrome: ");
    scanf("%d", &n);
    
    original = n;
    
    while (n > 0){                              // Reversing the digits of the number
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if (original == reversed){                  // Checking if the original number is equal to the reversed number
        printf("Palindrome\n");
    } 
    else {
        printf("Not Palindrome\n");
    }
    return 0;
}