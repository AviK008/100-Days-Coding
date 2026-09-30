/*
Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is 
greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. 
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
Date:30/09/2026
*/

#include <stdio.h>
int findCeiling(int arr[], int n, int x){
    int low = 0, high = n - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] >= x){
            ans = mid;       
            high = mid - 1; 
        } 
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter Element[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int result = findCeiling(arr, n, x);

    printf("Index of ceiling of %d: %d\n", x, result);
    return 0;
}