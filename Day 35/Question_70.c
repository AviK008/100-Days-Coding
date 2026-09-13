/*
Rotate an array to the right by k positions.
Date: 13/09/2026
*/

#include <stdio.h>
int main(){
    int n, k, i, j, temp;
    int arr[100];

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter The Number Of Positions To Rotate: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++){
        temp = arr[n - 1];

        for(j = n - 1; j > 0; j--){
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }

    printf("Array after rotation: ");

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}