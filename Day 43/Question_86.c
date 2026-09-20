/*
Check if a string is a palindrome.
Date: 21/09/2026
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++){
        if(str[i] != str[len - 1 - i]){
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}
