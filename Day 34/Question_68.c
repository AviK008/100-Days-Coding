/*
Delete an element from an array.
Date: 12/09/2026
*/

#include <stdio.h>
int main(){
    int n, arr[100], pos;
    
    printf("Enter The Number Of Elements In The Array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter The Position Of The Element To Be Deleted: ");
    scanf("%d", &pos);

    for(int i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    n--;

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}