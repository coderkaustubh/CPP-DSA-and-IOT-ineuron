/*
    10. Write a program to print all Armstrong numbers under 1000.
*/


#include<stdio.h>
int main()
{
    int num, digit, i, sum=0;

    printf("Armstrong numbers under 1000 are: \n");

    for(i=0; i<1000; i++)
    {
        num = i;
        sum = 0;

        while(num>0)
        {
            digit = num%10;
            num = num/10;

            sum = sum + digit*digit*digit;
        }

        if (sum==i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}