/*
Show that enums store integers by printing assigned values.
Date:06/11/2026
*/

#include<stdio.h>
enum result{
    SUCCESS,FAILURE,TIMEOUT
};

int main(){
    enum result ;
    printf("SUCCESS = %d\n",SUCCESS);
    printf("FAILURE = %d\n",FAILURE);
    printf("Timeout = %d\n",TIMEOUT);
    return 0;
}
