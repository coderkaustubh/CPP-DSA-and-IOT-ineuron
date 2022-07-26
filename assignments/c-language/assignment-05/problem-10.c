/*
    10. Write a program to print a table of N.
*/


#include<stdio.h>
int main()
{
    int i, n, pro;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Table of %d is: \n", n);
    for (i=1 ; i<=10 ; i++)
    {
        pro = n*i;
        printf("%d x %d = %d \n", n, i, pro);
    }
    return 0;
}