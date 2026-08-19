/*
Write a program to find the roots of a quadratic equation and categorize them.
Date: 18/08/2026
*/

#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, dis, r1, r2;

    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    dis = b * b - 4 * a * c;

    if (dis > 0){
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
        printf("Two distinct real roots: %.2f and %.2f\n", r1, r2);
    }
    else if (dis == 0){
        r1 = -b / (2 * a);
        printf("One real root: %.2f\n", r1);
    }
    else {
        printf("No real roots.\n");
    }
    return 0;
}