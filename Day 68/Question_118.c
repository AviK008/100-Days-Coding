/*
Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. 
Print that missing number
Date:16/10/2026
*/


#include <stdio.h>
int main(){
    int n, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++){
        printf("Enter element [%d]: ", i);
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    printf("\nMissing number is: %d\n", missing);
    return 0;
}
