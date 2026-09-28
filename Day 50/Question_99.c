/*
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Date:28/09/2026
*/

#include <stdio.h>
int main(){
    int day, month, year;
    char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun",  "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-%s-%d", day, months[month], year);
    return 0;
}