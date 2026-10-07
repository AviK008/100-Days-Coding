/*
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
Date:07/10/2026
 */

#include<stdio.h>
int main(){
    int i,j,n;
    int arr[50];
    int sum,max=0,k;

    printf("Enter the number of element you want to enter: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Size of subarray's sum:");
    scanf("%d",&k);

    for(i=0;i<=(n-k);i++){
        sum=0;
        for(j=i;j<(k+i);j++){
            sum+=arr[j];
        }
        if(max<sum){
            max=sum;
        }
    }
    printf("%d",max);
    return 0;
}