/* 
Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid 
anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
Date:13/10/2026
*/

#include<stdio.h>
#include<string.h>
int main(){
    char s[20],t[20];
    int i,len1,len2;
    int slc[26]={0},tlc[26]={0};

    printf("Enter 1st String: ");
    fgets(s,20,stdin);

    printf("Enter 2nd String: ");
    fgets(t,20,stdin);

    len1 = strlen(s);
    len2 = strlen(t);

    if(len1 != len2){
        printf("\nNot Anagrams\n");
        return 0;
    }

    for(i=0; i<len1; i++){
        int lower = s[i];
        slc[lower - 'a']++;
    }
    for(i=0; i<len2; i++){
        int lower = t[i];
        tlc[lower - 'a']++;
    }

   for(i=0; i<26; i++){
        if(slc[i] != tlc[i]){
            printf("\nNot Anagrams\n");
            return 0;
        }
    }
    printf("\nAnagrams\n");
    return 0;
}
