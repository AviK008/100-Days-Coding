/*
Count positive, negative, and zero elements in an array.
Date: 08/09/2026
*/

#include <stdio.h>
int main(){
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++){
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i] < 0){
            negative++;
        }
        else{
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d", positive, negative, zero);
    return 0;
}