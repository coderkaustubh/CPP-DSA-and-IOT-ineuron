/*
    2. Write a program to print the first N natural numbers.
*/

#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("First %d natural numbers are: \n", n);
    for (i=1 ; i<=n ; i++)
    {
        printf(" %d ", i);
    }
    return 0;
}