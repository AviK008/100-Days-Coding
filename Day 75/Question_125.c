/*
Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing 
content.
Date:23/10/2026
*/

#include <stdio.h>
int main(){
    FILE *fp;
    char text[200];

    fp = fopen("file.txt", "a");

    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}