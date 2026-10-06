/*
Write a Program to take an integer array nums. Print an array answer such that answer[i] is
equal to the product of all the elements of nums except nums[i]. The product of any prefix 
or suffix of nums is guaranteed to fit in a 32-bit integer.
Date:06/10/2026
 */

#include<stdio.h>
int main(){
    int n,i,j;
    int arr[10];

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter Element [%d]: ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        int product=1;
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            product*=arr[j];
        }
        printf("%d,",product);
    }
    return 0;
}