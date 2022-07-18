/*
    2. Write a program to print a given number without its last digit.
*/

#include<stdio.h>

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    a = a/10;
    printf("%d", a);
    return 0;
}