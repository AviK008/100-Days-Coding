/*
Assign explicit values starting from 10 and print them.
Date:02/11/2026
*/

#include <stdio.h>
enum Numbers{
    A = 10,
    B,
    C
};

int main(){
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);
    return 0;
}