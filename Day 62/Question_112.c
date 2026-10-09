/*
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's 
algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
Date:10/10/2026
*/

#include <stdio.h>
int main(){
    int arr[50],n,i;
    int max_sum=-32765;
    int curr_sum=0;

    printf("Enter the number of element you want to enter: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        curr_sum+=arr[i];

        if(curr_sum>max_sum){
            max_sum=curr_sum;
        }
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    printf("%d",max_sum);
    return 0;
}
