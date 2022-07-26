/*
    8. Write a program to print squares of the first 10 natural numbers.
*/

#include<stdio.h>
int main()
{
    int i, j;
    printf("Square of first Ten natural numbers are: \n");
    for (i=1 ; i<=10 ; i++)
    {
        j = i*i;
        printf(" %d ", j);
    }
    return 0;
}