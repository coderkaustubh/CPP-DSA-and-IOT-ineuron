/*
    5. Write a program to print the first 10 odd natural numbers in reverse order.
*/

#include<stdio.h>
int main()
{
     int i;
     printf("First Ten odd natural numbers in reverse order are: \n");
    for (i=19 ; i>=1 ; i=i-2)
    {
        printf(" %d ", i);
    }
    return 0;
}