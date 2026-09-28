/*
Print all sub-strings of a string.
Date:28/09/2026
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; i < strlen(str); i++){
        for(j = i; j < strlen(str); j++){
            printf("%.*s", j - i + 1, str + i);

            if(!(i == strlen(str) - 1 && j == strlen(str) - 1)){
                printf(",");
            }
        }
    }
    return 0;
}