/*
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
Date:01/11/2026
*/

#include <stdio.h>
enum Status{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(){
    enum Status result;

    printf("Enter the result(0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT): ");
    scanf("%d", (int*)&result);

    switch(result){
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;

        default:
            printf("Invalid status.\n");
    }
    return 0;
}