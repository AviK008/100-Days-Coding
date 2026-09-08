/*
Count even and odd numbers in an array.
Date: 08/09/2026
*/

#include <stdio.h>
int main(){
    int n, i;
    int even = 0, odd = 0;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++){
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Even=%d, Odd=%d", even, odd);
    return 0;
}