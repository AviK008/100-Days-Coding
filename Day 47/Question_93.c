/*
Check if two strings are anagrams of each other.
Date:25/09/2026
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    int freq1[256] = {0};
    int freq2[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)){
        printf("Not anagrams");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++){
        freq1[(unsigned char)str1[i]]++;
        freq2[(unsigned char)str2[i]]++;
    }

    for(i = 0; i < 256; i++){
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}