/*
Find the maximum and minimum element in an array.
Date: 07/09/2026
*/

#include <stdio.h>
int main(){
    int n, i;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++){
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Max=%d, Min=%d", max, min);
    return 0;
}