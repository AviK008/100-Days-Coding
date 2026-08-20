/*
Write a program to find profit or loss percentage given cost price and selling price.
Date: 20/08/2026
*/

#include <stdio.h>
int main() {
    float costPrice, sellingPrice, profit, loss;

    printf("Enter The Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter The Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice){
        profit = sellingPrice - costPrice;
        printf("Profit %.0f%%", (profit / costPrice) * 100);
    }
    else if (costPrice > sellingPrice){
        loss = costPrice - sellingPrice;
        printf("Loss %.0f%%", (loss / costPrice) * 100);
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}