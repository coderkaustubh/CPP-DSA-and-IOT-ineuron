/*
    4. Write a program to print the first 10 odd natural numbers.
*/

#include<stdio.h>
int main()
{
    int i;
    printf("First Ten odd natural numbers are: \n");

    for (i=1 ; i<=20 ; i=i+2)
    {
        printf(" %d ", i);
    }
    return 0;
}