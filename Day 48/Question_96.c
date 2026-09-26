/*
Reverse each word in a sentence without changing the word order.
Date:26/09/2026
*/

#include <stdio.h>
#include <string.h>
void reverse(char str[], int start, int end){
    char temp;

    while(start < end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main(){
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while(str[i] != '\0'){
        if(str[i] == ' '){
            reverse(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    reverse(str, start, i - 1);

    printf("%s", str);
    return 0;
}