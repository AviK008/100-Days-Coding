/*
Add two matrices.
Date: 16/09/2026
*/

#include <stdio.h>
int main(){
    int a[10][10], b[10][10], sum[10][10];
    int r1, c1, r2, c2, i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    if(r1 != r2 || c1 != c2){
        printf("Matrices cannot be added.");
    }
    else{
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                sum[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("Sum of matrices:\n");

        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}