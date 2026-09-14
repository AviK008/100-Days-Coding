/*
Read and print a matrix.
Date:14/09/2026
*/

#include <stdio.h>
int main(){
    int r, c, i, j;
    int a[100][100];

    printf("Enter The Number Of Rows: ");
    scanf("%d", &c);

    printf("Enter The Number Of Columns: ");
    scanf("%d", &r);

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("Enter The Element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}