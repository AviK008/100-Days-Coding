/*
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
Date: 01/09/2026
*/

#include <stdio.h>
int main(){
    int n, i;
    double sum = 0.0;
    double numerator = 2.0;
    double denominator = 3.0;

    printf("Enter The Number Of Terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum = sum + numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 4;
    }

    printf("Approximate Sum: %.2f\n", sum);
    return 0;
}