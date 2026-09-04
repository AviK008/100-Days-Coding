/*
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
Date: 04/09/2026
*/

#include <stdio.h>
int main(){
    int i, j;

    for(i = 1; i <= 5; i += 2){
        for(j = 1; j <= i; j++){
            printf("*\n");
        }

        printf("\n");
    }

    for(i = 3; i >= 1; i -= 2){
        for(j = 1; j <= i; j++){
            printf("*\n");
        }

        if(i != 1){
            printf("\n");
        }
    }
    return 0;
}