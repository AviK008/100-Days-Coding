/*
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
Date:04/11/2026
*/

#include <stdio.h>
enum UserRole{
    ADMIN,
    USER,
    GUEST
};

int main(){
    enum UserRole role;

    printf("Enter your role(0 for ADMIN, 1 for USER, 2 for GUEST): ");
    scanf("%d", &role);

    switch(role){
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome, User! You have standard access.\n");
            break;

        case GUEST:
            printf("Welcome, Guest! You have limited access.\n");
            break;

        default:
            printf("Invalid user role.\n");
    }
    return 0;
}
