/*
Print the initials of a name.
Date:27/09/2026
*/

#include <stdio.h>
int main(){
    char first[50], last[50];

    printf("Enter your name: ");
    scanf("%s %s", first, last);

    printf("%c.%c.\n", first[0], last[0]);
    return 0;
}