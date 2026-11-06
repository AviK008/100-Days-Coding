/*
Define a struct with enum Gender and print person's gender.
Date:07/11/2026
*/

#include <stdio.h>
enum Gender{
    MALE,
    FEMALE,
    OTHER
};
struct person{
    enum Gender gender;
};
int main(){
    struct person p;
    p.gender =OTHER;

    switch(p.gender){
        case MALE:
        printf("Male");
        break;
        case FEMALE:
        printf("Female");
        break;
        case OTHER:
        printf("Other");
        break;
        default:
        printf("Invalid output!");
    }
    return 0;
}