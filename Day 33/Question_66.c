/*
Insert an element in a sorted array at the appropriate position.
Date: 11/09/2026
*/

#include<stdio.h>
int main(){
    int n, i, element;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Element To Insert: ");
    scanf("%d", &element);

    i = n - 1;

    while(i >= 0 && arr[i] > element){
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;

    printf("Array After Insertion: ");

    for(i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}