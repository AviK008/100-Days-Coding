/*
Search for an element in an array using linear search.
Date: 09/09/2026
*/
#include <stdio.h>
int main(){
    int n,i,key,found = 0;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter The Element To Search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++){
        if(a[i] == key){
            printf("Found At Index %d", i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("-1");
    }
    return 0;
}