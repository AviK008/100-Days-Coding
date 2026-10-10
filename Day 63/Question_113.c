/*
Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. 
Print the kth smallest element as output.
Date:11/10/2026
*/


#include <stdio.h>
int main(){
    int n, k, i, j, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if(k < 1 || k > n){
        printf("Invalid k");
        return 0;
    }

    for(i = 0; i < n - 1; i++){             // Sort the array in ascending order
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d\n", arr[k - 1]);
    return 0;
}
