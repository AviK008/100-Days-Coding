/*  
Write a program to swap two numbers using a third variable.
Date: 12/08/2026
*/

#include <stdio.h>
int main(){
    int first, second, temp;

    printf("Enter the first number: ");
    scanf("%d",&first);

    printf("Enter the second number: ");
    scanf("%d",&second);

    temp = first;
    first = second;
    second = temp;

    printf("After swap: %d ",first);
    printf("%d\n",second);
    return 0;
}