/*
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Date: 21/08/2026
*/

#include <stdio.h>
int main(){
    int day, fine;

    printf("Enter The Number Of Days: ");
    scanf("%d", &day);

    if(day >= 0 && day <= 5){
        fine = day*2;
        printf("Fine Rs.%d", fine);
    }
    else if(day > 5 && day <= 10){
        fine = day*4 - 10;
        printf("Fine Rs.%d", fine);
    }
    else if(day > 10 && day <= 30){
        fine = day*6 - 30;
        printf("Fine Rs.%d", fine);
    }
    else if(day > 30){
        printf("Membership Cancelled");
    }
    return 0;
}