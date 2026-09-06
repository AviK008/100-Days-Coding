/*
Read and print elements of a one-dimensional array.
Date: 06/09/2026
*/

#include <stdio.h>
int main(){
    int n, i;
    int arr[100];

    printf("Enter The Number Of Elements In The Array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}