/*
    4. Write a program to calculate sum of squares of first N natural numbers.
*/


#include<stdio.h>
int main()
{
    int x, i, sum=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(i=1 ; i<=x ; i++)
    {
        sum = sum+i*i;
    }
    printf("Sum of squares of first %d natural numbers is %d", x, sum);
    return 0;
}