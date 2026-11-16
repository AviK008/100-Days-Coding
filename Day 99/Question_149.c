/*
Use malloc() to allocate structure memory dynamically and print details.
Date:16/11/2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[30];
    int roll_no;
    int marks;
};

int main(){
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if(s == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter name:");
    fgets(s->name,30,stdin);
    s->name[strcspn(s->name,"\n")]='\0';

    printf("Enter the roll_no:");
    scanf("%d",&s->roll_no);
    getchar(); 
    printf("Enter the marks:");
    scanf("%d",&s->marks);

    printf("Name: %s | Roll : %d | Marks: %d",s->name,s->roll_no,s->marks);
    free(s);
    return 0;
}