/*
    9. Write a program to print cubes of the first N natural numbers.
*/


#include<stdio.h>
int main()
{
    int i, n, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Cube of first %d natural numbers are: \n", n);
    for (i=1 ; i<=n ; i++)
    {
        j = i*i*i;
        printf(" %d ", j);
    }
    return 0;
}