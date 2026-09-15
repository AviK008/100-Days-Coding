/*
Find the sum of each row of a matrix and store it in an array.
Date: 15/09/2026
*/

#include <stdio.h>
int main(){
    int r, c;

    printf("Enter The Number Of Rows And Columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    int sum[r];

    for(int i = 0; i < r; i++){
        sum[i] = 0;

        for(int j = 0; j < c; j++){
            printf("Enter The Element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    for (int i = 0; i < r; i++){
        printf("%d ", sum[i]);
    }
    return 0;
}