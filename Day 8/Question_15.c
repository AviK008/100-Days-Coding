/*
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet,
digit, or special character.
Date: 17/08/2026
*/

#include <stdio.h>
int main() {
    char ch;

    printf("Enter the Character: ");
    scanf("%c", &ch);
    printf("\n");
   
    if (ch >= 'A' && ch <= 'Z'){
        printf("Uppercase Letter");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("Lowercase Letter");
    }
    else if (ch >= '0' && ch <= '9'){
        printf("Digit");
    }
    else if (ch == ' ' || ch == '\t' || ch == '\n'){
        printf("Whitespace");
    }
    else{
        printf("Special Character");
    }
    return 0;
}