/*  
Write a program to input two numbers and display their sum.
Date: 10/08/2026
*/

#include <stdio.h>
int main(){
    int n1, n2, sum;
    printf("Enter the first number: ");     
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("\n");
    
    sum = n1 + n2;
    printf("Sum = %d\n",sum);
    return 0;
}