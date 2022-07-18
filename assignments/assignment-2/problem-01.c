/*
    1. Write a program to print unit digit of a given number
*/

#include<stdio.h>

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    a = a%10;
    printf("the unit digit is %d ", a);
    return 0;
}