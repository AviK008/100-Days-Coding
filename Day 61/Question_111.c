/*
Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of 
size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
Date:09/10/2026
*/

#include <stdio.h>
int main(){
    int arr[10];
    int i,j,n,k;
    int c;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);

    printf("Enter the subarray size: ");
    scanf("%d",&k);

    for(i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<=(n-k);i++){
        c=0;

        for(j=i;j<(k+i);j++){
            if(arr[j]<0){
                printf("%d ",arr[j]);
                c++;
                break;
            }
        }
        if(c==0){
            printf("0 ");
        }   
    }
    return 0;
}
