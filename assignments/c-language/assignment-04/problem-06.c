/*
    6. Write a program to print the first 10 even natural numbers.
*/

#include<stdio.h>
int main()
{
    int i;
    printf("First Ten even natural numbers are: \n");
    for (i=2 ; i<=20 ; i=i+2)
    {
        printf(" %d ", i);
    }
    return 0;
}