/*
Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
Date:25/10/2026
*/

#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if(input == NULL || output == NULL){
        printf("Error opening file.\n");
        return 1;
    }

    while((ch = fgetc(input)) != EOF){
        fputc(toupper((unsigned char)ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted to uppercase successfully.\n");
    return 0;
}