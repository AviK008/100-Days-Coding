/*
Remove all vowels from a string.
Date:24/09/2026
*/

#include <stdio.h>
int main(){
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'){
            printf("%c", str[i]);
        }
    }
    return 0;
}