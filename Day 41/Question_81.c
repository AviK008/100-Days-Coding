/*
Count characters in a string without using built-in length functions.
Date: 19/09/2026
*/

#include <stdio.h>
int main(){
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[count] != '\0'){
        count++;
    }

    printf("%d", count);
    return 0;
}