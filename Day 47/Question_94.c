/*
Find the longest word in a sentence.
Date:25/09/2026
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    char word[100], longest[100];
    int i = 0, j = 0;
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0'){

        if(str[i] != ' ' && str[i] != '\n'){
            word[j++] = str[i];
        } 
        else{
            word[j] = '\0';

            if(j > maxLength){
                maxLength = j;
                strcpy(longest, word);
            }

            j = 0;
        }

        i++;
    }

    if(j > 0){
        word[j] = '\0';

        if(j > maxLength){
            strcpy(longest, word);
        }
    }

    printf("%s", longest);
    return 0;
}