/*
Find the transpose of a matrix.
Date: 15/09/2026
*/

#include <stdio.h>
int main(){
    int r, c;
    printf("Enter The Number Of Rows And Columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            printf("Enter The Element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int j = 0; j < c; j++){
        for(int i = 0; i < r; i++){
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
    return 0;
}