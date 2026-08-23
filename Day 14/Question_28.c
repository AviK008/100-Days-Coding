/*
Write a program to print the product of even numbers from 1 to n.
Date: 23/08/2026
*/

#include <stdio.h>
int main() {
    int n, product = 1; 

    printf("Enter The Value Of n: ");
    scanf("%d", &n);

    if(n < 2){
        printf("0\n");
        return 0;
    }

    for(int i = 2; i <= n; i += 2){
        product *= i;
    }

    printf("%d\n", product);

    return 0;
}