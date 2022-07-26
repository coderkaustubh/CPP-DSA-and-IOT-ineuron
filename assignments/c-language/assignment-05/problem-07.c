/*
    7. Write a program to print the first N even natural numbers in reverse order.
*/

#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("First %d even natural numbers in reverse order are: \n", n);
    for (i=n*2 ; i>=2 ; i=i-2)
    {
        printf(" %d ", i);
    }
    return 0;
}