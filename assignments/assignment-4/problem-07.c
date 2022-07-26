/*
    7. Write a program to print the first 10 even natural numbers in reverse order.
*/


#include<stdio.h>
int main()
{
    int i;
    printf("First Ten even natural numbers in reverse order are: \n");
    for (i=20 ; i>=2 ; i=i-2)
    {
        printf(" %d ", i);
    }
    return 0;
}