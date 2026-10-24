/*
Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; 
otherwise, read and display its content.
Date:24/10/2026
*/

#include <stdio.h>
int main(){
    FILE *fp;
    char filename[100];
    char ch;

    printf("Enter the file name: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL){
        printf("Error: File does not exist or cannot be opened.\n");
    } 
    else{
        printf("\nFile contents:\n");

        while((ch = fgetc(fp)) != EOF){
            putchar(ch);
        }
        fclose(fp);
    }
    return 0;
}