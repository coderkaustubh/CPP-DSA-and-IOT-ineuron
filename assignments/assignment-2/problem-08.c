/*
    8. Write a program to check whether the given number is even or odd using a bitwise operator.
*/

#include<stdio.h>
int main()
{
    int x, result;
    printf("enter a number: ");
    scanf("%d", &x);
    result = x & 1;
    if(result)
    {
        printf("%d is odd", x);
    }
    else
    {
        printf("%d is even", x);
    }
    return 0;
}