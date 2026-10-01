/*
Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of 
all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the 
left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. 
Print the leftmost pivot index. If no such index exists, print -1.
Date:01/10/2026
*/

#include <stdio.h>
int main(){
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int nums[n];
    int totalSum = 0;
    int leftSum = 0;

    for(int i = 0; i < n; i++){
        printf("Enter Element [%d]: ", i);
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    
    for(int i = 0; i < n; i++){
        int rightSum = totalSum - leftSum - nums[i];

        if(leftSum == rightSum){
            printf("%d", i);
            return 0;
        }
        leftSum += nums[i];
    }

    printf("-1");
    return 0;
}