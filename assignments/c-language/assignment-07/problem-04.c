/*
    4. Write a program to calculate HCF of two numbers.
*/


#include<stdio.h>
int main()
{
    int a, b, greater, i, hcf=1;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    greater = a>b ? a : b;

    for (i=2; i<=greater; )
    {
        if(a%i==0 && b%i==0)
        {
            hcf = hcf*i;
            a = a/i;
            b = b/i;
        }
        else
        {
            i++;
        } 
        greater = a>b ? a : b;
    }
    printf("HCF is %d", hcf);
    return 0;
}