/*
Merge two arrays.
Date: 10/09/2026
*/

#include <stdio.h>
int main(){
    int n1, n2, i;

    printf("Enter The Size Of The First Array: ");
    scanf("%d", &n1);

    int a[n1];

    for(i = 0; i < n1; i++){
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter The Size Of The Second Array: ");
    scanf("%d", &n2);

    int b[n2];

    for(i = 0; i < n2; i++){
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++){
        printf("%d ", a[i]);
    }

    for(i = 0; i < n2; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}