/*  
Write a program to input two numbers and display their sum, difference, product, and quotient.
Date: 10/08/26
*/

#include <stdio.h>
int main(){
    int n1, n2, sum, diff, product;
    float quotient;

    printf("Enter the first number: ");     
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("\n");
    
    sum = n1 + n2;
    diff = n1 - n2;
    product = n1 * n2;
    
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);
    
    if(n2 != 0){
        quotient = (float)n1 / n2;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Quotient = Undefined \n");
    }

    return 0;
}

