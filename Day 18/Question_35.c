/*
Write a program to print all factors of a given number.
Date: 27/08/2026
*/

#include <stdio.h>
int main(){
    int n, i;

    printf("Enter A Number To Find Its Factors: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){    
        if (n % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}