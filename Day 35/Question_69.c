/*
Find the second largest element in an array.
Date: 13/09/2026
*/

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter The Number Of Elements In The Array: ");
    scanf("%d", &n);
    
    int arr[n];

    for(i = 0; i < n; i++){
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];
    int secondlargest = arr[0];
    
    
    for(i = 0; i < n; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        } 
        else if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    
    printf("The Second Largest Element Is: %d\n", secondlargest);
    return 0;
}