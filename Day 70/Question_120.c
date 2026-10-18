/*
Write a program to take a string input. Change it to sentence case.
Date:18/10/2026
*/

#include <stdio.h>
int main(){
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
            break;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            break;
        }
    }

    for(i = i + 1; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    printf("Sentence case: %s", str);
    return 0;
}