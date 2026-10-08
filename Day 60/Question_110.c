/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k 
moving from left to right. Print the maximum elements for each window separated by spaces as output.
Date:08/101/2026
*/

#include<stdio.h>
int main(){
    int i,j,n;
    int arr[50];
    int max,k;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the size of subarray's sum: ");
    scanf("%d",&k);

    for(i=0;i<=(n-k);i++){
        for(j=i;j<(k+i);j++){
            if(arr[i]<=arr[j]){
                max=arr[j];
            }
        }
        printf("%d ",max);
    }
    return 0;
}
