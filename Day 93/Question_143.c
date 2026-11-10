/*
Find and print the student with the highest marks.
*/

#include <stdio.h>
#include <string.h>
struct Student {
    char name[30];
    int roll_no;
    int marks;
};
int main(){
    int i;
    int max;
    char postion[30];
    struct Student s[3];
    for(i=0;i<3;i++){
        printf("Details of %d student\n",i+1);
        printf("Enter the name:");
        scanf("%s",s[i].name);
        printf("Enter the roll no:");
        scanf("%d",&s[i].roll_no);
        printf("Enter the Marks:");
        scanf("%d",&s[i].marks);    
    }
    max = s[0].marks;
    strcpy(postion, s[0].name);
    for(i=0;i<3;i++){
        if(max < s[i].marks){
            max= s[i].marks;
            strcpy(postion,s[i].name);
        }
    }
    printf("%s (Marks: %d)",postion,max);
    return 0;
}