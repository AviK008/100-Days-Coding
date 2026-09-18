/*
Perform diagonal traversal of a matrix.
Date: 18/09/2026
*/

#include <stdio.h>
int main(){
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for(int d = 0; d < r + c - 1; d++){
        if(d % 2 == 0){
            int i = (d < r) ? d : r - 1;
            int j = d - i;

            while(i >= 0 && j < c){
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        }
        
        else{
            int j = (d < c) ? d : c - 1;
            int i = d - j;

            while(i < r && j >= 0){
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }
    return 0;
}