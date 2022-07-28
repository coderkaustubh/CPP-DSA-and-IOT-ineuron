/*
    7. Write a program to count digits in a given number.
*/


#include<stdio.h>
int main()
{
    int a, i, n;
    printf("Enter a number: ");
    scanf("%d", &a);

    n = a;
    
    for(i=0; n>0; i++)
    {
        n = n/10;
    }

    if(a==0)
    {
        printf("Number of digits in %d is 1", a);
    }
    else
    {
        printf("Number of digits in %d is %d", a, i);
    }

    return 0;
}