/*
Write a program to check if a number is prime.
Date: 26/08/2026
*/

#include <stdio.h>
int main(){
    int n, i, prime = 1;

    printf("Enter A Number To Check If It Is Prime: ");
    scanf("%d", &n);

    if(n <= 1){                     // Numbers less than or equal to 1 are not prime
        prime = 0;
    } 
    else{                           
        for(i = 2; i < n; i++){ 
            if(n % i == 0){         // If n is divisible by any number other than 1 and itself, it is not prime
                prime = 0;
                break;              // Exit the loop early if a divisor is found
            }
        }
    }

    if(prime){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}