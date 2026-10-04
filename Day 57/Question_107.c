/*
write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in
order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater 
than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
Date:05/10/2026
*/


#include <stdio.h>
int main(){
    int n, i, j, found;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++){
        printf("Enter Element [%d]: ", i );
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        found = 0;

        for(j = i - 1; j >= 0; j--){
            if(arr[j] > arr[i]){
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if(found == 0){
            printf("-1");
        }
        if(i < n - 1){
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
