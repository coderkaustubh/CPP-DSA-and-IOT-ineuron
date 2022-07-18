/*
    12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
    convert it into USD.
*/

#include<stdio.h>
int main()
{
    float x = 76.23, inr, usd;
    printf("enter a amount in INR: ");
    scanf("%f", &inr);
    usd = inr/x;
    printf("%.2f INR = %.2f USD", inr, usd);
    return 0;
}