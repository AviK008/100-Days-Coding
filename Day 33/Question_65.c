/*
Search in a sorted array using binary search.
Date: 11/09/2026
*/

#include<stdio.h>
int main(){
    int n, i, search;
    int low, high, mid;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Element To Search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while(low <= high){
        mid = (low + high) / 2;

        if(arr[mid] == search){
            printf("Found at index %d", mid);
            return 0;
        }
        else if(arr[mid] < search){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    printf("-1");
    return 0;
}