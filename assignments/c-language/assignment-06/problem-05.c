/*
    5. Write a program to calculate sum of cubes of first N natural numbers.
*/


#include<stdio.h>
int main()
{
    int x, i, sum=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(i=1 ; i<=x ; i++)
    {
        sum = sum+i*i*i;
    }
    printf("Sum of cubes of first %d natural numbers is %d", x, sum);
    return 0;
}