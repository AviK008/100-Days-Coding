/*
Find the sum of main diagonal elements for a square matrix.
Date: 17/09/2026
*/

#include<stdio.h>
int main(){
    int a[100][100], n;
    int i, j, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        sum = sum + a[i][i];
    }
    printf("%d", sum);
    return 0;
}