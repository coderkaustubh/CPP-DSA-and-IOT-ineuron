/*
    6. Write a program to print greater between two numbers. Print one number if both are 
       the same.
*/

#include<stdio.h>
int main()
{
    int x, y;
    printf("enter two numbers: ");
    scanf("%d%d", &x, &y);
    if(x>=y)
    {
        printf("%d is bigger ", x);
    }
    else 
    {
        printf("%d is bigger ", y);
    }
    return 0;
}