/*
    1. Write a program to find the Nth term of the Fibonnaci series.
*/


#include<stdio.h>
int main()
{
    int a=0, b=1, i, N, temp;
    printf("Enter a number: ");
    scanf("%d", &N);

    for(i=3; i<=N; i++)
    {
        temp = b;
        b = a+b;
        a = temp;
    }

    if (N==2)
    {
        printf("1");
    }
    else if (N==1)
    {
        printf("0");
    }
    else if (N<1)
    {
        printf("Enter value >=1");
    } 
    else
    {
        printf("%d", b);
    }

    return 0;
}