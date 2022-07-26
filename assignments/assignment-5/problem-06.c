/*
    6. Write a program to print the first N even natural numbers.
*/

#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("First %d even natural numbers are: \n", n);
    for (i=2 ; i<=n*2 ; i=i+2)
    {
        printf(" %d ", i);
    }
    return 0;
}