/*
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
Date: 03/09/2026
*/

#include <stdio.h>
int main(){
    int i, j;

    for(i = 5; i >= 1; i--){
        for (j = 5; j > i; j--){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}