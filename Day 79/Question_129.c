/*
A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
Date:27/10/2026
*/


#include <stdio.h>
int main(){
    FILE *file;
    int num, count = 0;
    long long sum = 0;
    double average;

    file = fopen("numbers.txt", "r");

    if(file == NULL){
        printf("Error opening file.\n");
        return 1;
    }

    while(fscanf(file, "%d", &num) == 1){
        sum += num;
        count++;
    }

    fclose(file);

    if(count == 0){
        printf("No integers found in the file.\n");
    } 
    else{
        average = (double)sum / count;
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", average);
    }
    return 0;
}
