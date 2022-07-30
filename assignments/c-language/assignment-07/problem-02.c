/*
    2. Write a program to print first N terms of Fibonacci series.
*/


#include<stdio.h>
int main()
{
    int a=0, b=1, i, N, temp;
    printf("Enter a number: ");
    scanf("%d", &N);

    if (N>1)
    {
        printf("%d, %d", a, b);
    }
    else if (N==1)
    {
        printf("0");
    }
    else
    {
        printf("Enter value >=1");
    }

    for(i=3; i<=N; i++)
    {
        temp = b;
        b = a+b;
        a = temp;
        printf(", %d", b);

    }
    return 0;
}