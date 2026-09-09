/*
Reverse an array without taking extra space.
Date: 09/09/2026
*/

#include<stdio.h>
int main(){
    int n, i, temp;
    int a[100];

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n / 2; i++){
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}