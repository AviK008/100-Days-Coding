/*  
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Date: 11/08/2026
*/


#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &a);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &b);

    c = a * b;
    d = 2 * (a + b);

    printf("Area = %d,", c);
    printf("Perimeter = %d\n", d);
    return 0;
}