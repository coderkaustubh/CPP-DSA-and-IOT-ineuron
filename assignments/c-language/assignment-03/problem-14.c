/*
    14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
*/

#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if(x%7==0)
    {
        printf("%d is divisible by 7 ", x);
    }
    else if(x%3==0)
    {
        printf("%d is divisible by 3 ", x);
    }
    else
    {
        printf("number is not divisible by 7 or 3 ");
    }
    return 0;
}