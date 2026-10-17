/*
Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in 
one single iteration.
Date:17/10/2026
*/

#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int seen[101] = {0};

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        if(seen[arr[i]] == 1){
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }
    return 0;
}