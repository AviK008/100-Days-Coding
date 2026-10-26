/*
Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
Date:26/10/2026
*/


#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");

    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF){
        ch = tolower((unsigned char)ch);

        if(ch >= 'a' && ch <= 'z'){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            } 
            else{
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}
