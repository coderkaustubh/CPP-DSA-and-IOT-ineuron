/*
    3. Write a program to print the first N natural numbers in reverse order.
*/

#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("First %d natural numbers in reverse order are: \n", n);
    for (i=n ; i>=1 ; i--)
    {
        printf(" %d ", i);
    }
    return 0;
}