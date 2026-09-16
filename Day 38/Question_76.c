/*
Check if a matrix is symmetric.
Date: 16/09/2026
*/

#include <stdio.h>
int main(){
    int a[10][10];
    int r, c, i, j;
    int symmetric = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c){
        symmetric = 0;
    }
    else{
        printf("Enter matrix:\n");

        for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                if(a[i][j] != a[j][i]){
                    symmetric = 0;
                    break;
                }
            }
            if(symmetric == 0){
                break;
            }
        }
    }

    if(symmetric == 1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}