/*
    1. Write a program to check whether a given number is positive or non-positive.
*/

#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if(x>0)
    {
        printf("Number is Positive ");
    }
    else
    {
        printf("Number is Non-Positive ");
    }
    return 0;
}