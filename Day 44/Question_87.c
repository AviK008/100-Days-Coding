/*
Count spaces, digits, and special characters in a string.
Date: 22/09/2026
*/

#include <stdio.h>
int main(){
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' '){
            spaces++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            digits++;
        }
        else if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && str[i] != '\n'){
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
    return 0;
}