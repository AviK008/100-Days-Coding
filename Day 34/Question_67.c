/*
Insert an element in an array at a given position.
Date: 12/09/2026
*/

#include <stdio.h>
int main(){
    int n, arr[100], pos, element;
    
    printf("Enter The Number Of Elements In The Array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter The Position Where You Want To Insert The Element: ");
    scanf("%d", &pos);
    printf("Enter The Element To Be Inserted: ");
    scanf("%d", &element);

    for(int i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}