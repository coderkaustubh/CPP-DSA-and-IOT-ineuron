/*
    6. Write a program to calculate factorial of a number.
*/


#include<stdio.h>
int main()
{
    int x, i, fact=1;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(i=x ; i>=1 ; i--)
    {
        fact = fact*i;
    }
    printf("Factorial of %d is %d", x, fact);
    return 0;
}