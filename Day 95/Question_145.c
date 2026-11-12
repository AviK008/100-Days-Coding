/*
Return a structure containing top student's details from a function.
Date:12/11/2026
*/

#include <stdio.h>
#include <string.h>
struct student{
    char name[30];
    int roll_no;
    int marks;
};
struct student getTopper(struct student s[], int n){
    struct student top = s[0];

    for(int i = 1; i < n; i++){
        if(s[i].marks > top.marks){
            top = s[i];
        }
    return top;
    }
}
int main(){
    struct student s[3];   

    for(int i = 0; i < 3; i++){
        printf("\nEnter details of student %d\n", i + 1);

        getchar();  
        printf("Enter name: ");
        fgets(s[i].name, 30, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter roll no.: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    struct student top = getTopper(s, 3);
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
