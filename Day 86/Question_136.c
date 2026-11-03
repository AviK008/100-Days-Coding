/*
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
Date:03/11/2026
*/

#include <stdio.h>
enum Operation{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main(){
    float num1, num2, result;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nMenu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case ADD:
            result = num1 + num2;
            printf("Addition = %.2f\n", result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Subtraction = %.2f\n", result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Multiplication = %.2f\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
