/*
Store employee data in a binary file using fwrite() and read using fread().
Date:14/11/2026
*/

#include <stdio.h>
#include <string.h>
struct Employee{
    char name[30];
    int id;
    float salary;
};

int main(){
    struct Employee e1, e2;
    FILE *fp;

    fp = fopen("employee.dat", "wb");
    if(fp == NULL){
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter Employee Name: ");
    fgets(e1.name, 30, stdin);
    e1.name[strcspn(e1.name, "\n")] = '\0';

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Salary: ");
    scanf("%f", &e1.salary);

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if(fp == NULL){
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n----- Employee Data Read from File -----\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);
    return 0;
}
