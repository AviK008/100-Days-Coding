/*
Create Employee structure with nested Date structure for joining date and print details.
Date:13/11/2026
*/

#include <stdio.h>
#include <string.h>
struct Date{
    int day;
    int month;
    int year;
};

struct Employee{
    char name[30];
    int id;
    struct Date joining_date;
};

int main(){
    struct Employee s;
    printf("Enter Employee Name:");
    fgets(s.name,30,stdin);
    s.name[strcspn(s.name,"\n")]='\0';
    printf("Enter the id of employee:");
    scanf("%d",&s.id);
    printf("Enter the date:");
    scanf("%d %d %d",&s.joining_date.day,&s.joining_date.month,&s.joining_date.year);

    printf("Name: %s | ID: %d | Joining Date: %d/%d/%d",s.name,s.id,s.joining_date.day,s.joining_date.month,s.joining_date.year);
    return 0;
}