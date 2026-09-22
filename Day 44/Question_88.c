/*
Replace spaces with hyphens in a string.
Date: 22/09/2026
*/

#include <stdio.h>
int main(){
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            str[i] = '-';
        }
    }

    printf("%s", str);
    return 0;
}