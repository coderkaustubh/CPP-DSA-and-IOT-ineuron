/*
    2. Write a program to calculate sum of first N even natural numbers.
*/


#include<stdio.h>
int main()
{
    int x, i, sum=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(i=2 ; i<=x*2 ; i=i+2)
    {
        sum = sum+i;
    }
    printf("Sum of first %d even natural numbers is %d", x, sum);
    return 0;
}