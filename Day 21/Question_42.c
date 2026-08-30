/*
Write a program to check if a number is a perfect number.
Date: 30/08/2026
*/

#include <stdio.h>
int main(){
    int num, i, sum = 0;

    printf("Enter A Number: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++){
        if(num % i == 0){
            sum = sum + i;
        }
    }

    if(sum == num){
        printf("Perfect Number");
    }
    else{
        printf("Not A Perfect Number");
    }
    return 0;
}