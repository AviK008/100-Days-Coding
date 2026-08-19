/*  
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
Date: 19/08/2026
*/

#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter the length of side a: ");
    scanf("%d", &a);
    printf("Enter the length of side b: ");
    scanf("%d", &b);
    printf("Enter the length of side c: ");
    scanf("%d", &c);

    if (a == b && b == c){
        printf("Equilateral Triangle\n");
    }
    else if (a == b || b == c || a == c){
        printf("Isosceles Triangle\n");
    }
    else{
        printf("Scalene Triangle\n");
    }
    return 0;
}