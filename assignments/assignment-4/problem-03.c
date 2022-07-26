/*
    3. Write a program to print the first 10 natural numbers in reverse order.
*/

#include<stdio.h>
int main()
{
     int i;
     printf("First Ten natural numbers in reverse order are: \n");
    for (i=10 ; i>=1 ; i--)
    {
       printf(" %d ", i);
    }
    return 0;
}