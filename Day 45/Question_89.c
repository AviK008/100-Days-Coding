/*
Count frequency of a given character in a string.
Date:23/09/2026
*/

#include <stdio.h>
int main(){
    char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            count++;
        }
    }

    printf("%d", count);
    return 0;
}