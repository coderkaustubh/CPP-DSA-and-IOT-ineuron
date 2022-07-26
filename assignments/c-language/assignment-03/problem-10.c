/*
    10. Write a program which takes the cost price and selling price of a product from the 
        user. Now calculate and print profit or loss percentage.
*/

#include<stdio.h>
int main()
{
    float cp, sp, profit, loss, profitPercent, lossPercent;
    printf("enter cost price: ");
    scanf("%f", &cp);
    printf("enter selling price: ");
    scanf("%f", &sp);
    if (sp>=cp)
    {
        profit = sp-cp;
        profitPercent = profit*100/cp;
        printf("Profit Percent = %.2f%%", profitPercent);
    }
    else
    {
        loss = cp-sp;
        lossPercent = loss*100/cp;
        printf("Loss Percent = %.2f%%", lossPercent);
    }
    return 0;
}