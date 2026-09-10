/*
Find the digit that occurs the most times in an integer number.
Date: 10/09/2026
*/

#include <stdio.h>
int main(){
    long long num;
    int frequency[10] = {0};
    int digit;
    int max = 0;
    int result = 0;

    printf("Enter A Number: ");
    scanf("%lld", &num);

    while(num > 0){     
        digit = num % 10;
        frequency[digit]++;
        num = num / 10;
    }

    for(int i = 0; i < 10; i++){
        if(frequency[i] > max){
            max = frequency[i];
            result = i;
        }
    }

    printf("%d", result);
    return 0;
}