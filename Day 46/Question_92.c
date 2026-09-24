/*
Find the first repeating lowercase alphabet in a string.
Date:24/09/2026
*/

#include <stdio.h>
int main(){
    char str[100];
    int count[26] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++){
        count[str[i] - 'a']++;

        if(count[str[i] - 'a'] == 2){
            printf("%c", str[i]);
            break;
        }
    }
    return 0;
}