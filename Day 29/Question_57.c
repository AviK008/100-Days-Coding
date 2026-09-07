/*
Find the sum of array elements.
Date: 07/09/2026
*/

#include <stdio.h>
int main(){
    int n, i, sum = 0;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++){
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);
    return 0;
}