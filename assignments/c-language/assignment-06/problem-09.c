/*
    9. Write a program to calculate LCM of two numbers.
*/


#include<stdio.h>
int main()
{
    int a, b, i, greater, lcm=1;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    greater = a>b ? a : b;

    for(i=2; i<=greater; )
    {
        if (a%i==0 && b%i==0)
        {
            lcm = lcm*i;
            a = a/i;
            b = b/i;
        }
        else if (a%i==0)
        {
            lcm =lcm*i;
            a = a/i;
        }
        else if (b%i==0)
        {
            lcm =lcm*i;
            b = b/i;
        } 
        else
        {
            i++;
        }

        greater = a>b ? a : b;

    }

    printf("lcm = %d", lcm);
    return 0;
}