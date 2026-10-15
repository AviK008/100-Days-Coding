/*
Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. 
Print the merged array.
Date: 15/10/2026
*/

#include <stdio.h>
int main(){
    int m, n, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int a[m], b[n], c[m + n];

    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < m; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second sorted array:\n");
    for(j = 0; j < n; j++) {
        printf("Element %d: ", j + 1);
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;
    k = 0;

    while(i < m && j < n){
        if(a[i] <= b[j]){
            c[k++] = a[i++];
        } 
        else{
            c[k++] = b[j++];
        }
    }

    while(i < m){
        c[k++] = a[i++];
    }

    while(j < n){
        c[k++] = b[j++];
    }

    printf("Merged sorted array:\n");
    for(i = 0; i < m + n; i++){
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}
