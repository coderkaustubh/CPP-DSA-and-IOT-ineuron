/*
    10. Write a program to print a table of 5.
*/

#include<stdio.h>
int main()
{
    int i, j;
    printf("Table of 5: \n");
    for (i=1 ; i<=10 ; i++)
    {
        j = 5*i;
        printf("5 x %d = %d \n", i, j);
    }
    return 0;
}