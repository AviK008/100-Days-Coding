/*
Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write 
them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
Date:19/10/2026
*/

#include <stdio.h>
int main() {
    FILE *fp;
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL){
        printf("Error opening the file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data successfully saved to info.txt!\n");
    return 0;
}