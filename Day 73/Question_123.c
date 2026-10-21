/*
Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated 
by spaces or newlines.
Date:21/10/2026
*/


#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *fp;
    char filename[100];
    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int lastChar = '\0';

    printf("Enter file name: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL){
        printf("Error: Cannot open file.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF){
        characters++;
        lastChar = ch;

        if(ch == '\n'){
            lines++;
        }

        if(ch == ' ' || ch == '\n'){
            inWord = 0;
        } 
        else{
            if(!inWord){
                words++;
                inWord = 1;
            }
        }
    }

    if(characters > 0 && lastChar != '\n'){
        lines++;
    }

    fclose(fp);

    printf("\nTotal characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);
    return 0;
}
