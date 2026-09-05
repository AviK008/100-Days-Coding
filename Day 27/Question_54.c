/*
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
Date: 05/09/2026
*/

#include <stdio.h>
int main() {
    int i, j, space;

    for(i = 1; i <= 7; i += 2) {
        for(space = 1; space <= (7 - i) / 2; space++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(i = 5; i >= 1; i -= 2) {
        for(space = 1; space <= (7 - i) / 2; space++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}