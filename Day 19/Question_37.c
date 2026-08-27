/*
Write a program to find the LCM of two numbers.
Date: 28/08/2026
*/

#include <stdio.h>
int main(){
    int n1, n2, max;

    printf("Enter The First Number: ");
    scanf("%d", &n1);

    printf("Enter The Second Number: ");
    scanf("%d", &n2);

    max = (n1 > n2) ? n1 : n2;

    while(1){
        if (max % n1 == 0 && max % n2 == 0){
            printf("%d\n", max);
            break;
        }
        max++;
    }
    return 0;
}