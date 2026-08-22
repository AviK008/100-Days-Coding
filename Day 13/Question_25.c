/*
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
Date: 22/08/2026
*/

#include <stdio.h>
int main(){
    int a, b;
    char op;

    printf("Enter The Numbers And Operator(+, -, *, /, %%): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op){
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            printf("%d", a / b);
            break;

        case '%':
            printf("%d", a % b);
            break;

        default:
            printf("Invalid Operator");
    }
    return 0;
}