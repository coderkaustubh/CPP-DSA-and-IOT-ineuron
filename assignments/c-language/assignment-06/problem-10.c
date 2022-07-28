/*
    10. Write a program to reverse a given number.
*/


#include<stdio.h>
int main()
{
    int a, i, reverse=0;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (i=0; a>0; i++)
    {
        reverse = reverse*10 + a%10;
        a = a/10;
    }

    printf("reverse = %d", reverse);
    return 0;
}