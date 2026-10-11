/*
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. 
Print the length as output.
Date:12/10/2026
*/

#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    scanf("%999s", s);

    int n = strlen(s);
    int last[256];

    for(int i = 0; i < 256; i++){
        last[i] = -1;
    }

    int start = 0, maxLen = 0;

    for(int i = 0; i < n; i++){
        unsigned char ch = (unsigned char)s[i];

        if(last[ch] >= start){
            start = last[ch] + 1;
        }

        last[ch] = i;

        int len = i - start + 1;
        if(len > maxLen){
            maxLen = len;
        }
    }
    printf("%d\n", maxLen);
    return 0;
}
