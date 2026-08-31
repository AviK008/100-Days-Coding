/*
Write a program to check if a number is a strong number.
Date: 31/08/2026
*/

#include<stdio.h>
int main(){
    int n,original,digit,factorial,sum = 0;

    printf("Enter A Number To Check If It's A Strong Number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0){
        digit = n % 10;
        factorial = 1;

        for(int i = 1; i <= digit; i++){
            factorial *= i;
        }
        sum += factorial;
        n /= 10;
    }

    if(sum == original){
        printf("Strong Number", original);
    }
    else{
        printf("Not A Strong Number", original);
    }
    return 0;
}