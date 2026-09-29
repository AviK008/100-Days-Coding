/*
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
Print -1, -1 if the target is not present.
Date:29/09/2026
*/

#include <stdio.h>
int firstOccurrence(int arr[], int n, int target){
    int low = 0, high = n - 1;
    int result = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == target){
            result = mid;
            high = mid - 1;             // Search left
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return result;
}

int lastOccurrence(int arr[], int n, int target){
    int low = 0, high = n - 1;
    int result = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == target){
            result = mid;
            low = mid + 1;              // Search right
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return result;
}

int main(){
    int n, target;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter Element [%d]", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    printf("First occurrence: %d, Last occurrence: %d\n", first, last);
    return 0;
}