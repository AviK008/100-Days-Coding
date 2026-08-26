/*
Write a program to find the HCF (GCD) of two numbers.
Date: 27/08/2026
*/

#include <stdio.h>
int main(){
    int a, b, i, hcf;

    printf("Enter The First Number: ");
    scanf("%d", &a);

    printf("Enter The Second Number: ");
    scanf("%d", &b);

    for(i = 1; i <= a && i <= b; i++){
        if (a % i == 0 && b % i == 0){
            hcf = i;
        }
    }

    printf("%d", hcf);
    return 0;
}