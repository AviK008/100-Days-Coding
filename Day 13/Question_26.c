/*
Write a program to print numbers from 1 to n.
Date: 22/08/2026
*/

#include <stdio.h>
int main() {
    int n;

    printf("Enter A Number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }
    return 0;
}