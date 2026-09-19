/*
Print each character of a string on a new line.
Date: 19/09/2026
*/

#include <stdio.h>
int main(){
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0'){
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}