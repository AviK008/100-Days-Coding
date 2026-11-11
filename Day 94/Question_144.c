/*
Write a function that accepts a structure as parameter and prints its members.
Date:11/11/2026
*/

#include <stdio.h>
#include <string.h>
struct Student{
    char name[30];
    int roll_no;
    float marks;
};

void printStudent(struct Student s);

int main(){
    struct Student s1;

    printf("Enter name: ");
    fgets(s1.name, 30, stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0'; 

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printStudent(s1);
    return 0;
}

void printStudent(struct Student s){
    printf("\n--- Student Details ---\n");
    printf("Name: %s | Roll: %d | Marks: %f",s.name,s.roll_no,s.marks);
}