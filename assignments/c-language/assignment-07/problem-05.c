/*
    5. Write a program to check whether two given numbers are co-prime
       numbers or not.
*/


#include<stdio.h>
int main()
{
    int a, b, i, lesser, flag=0;
    printf("Enter two natural numbers: ");
    scanf("%d%d", &a, &b);

    lesser = a<b ? a : b;

    for(i=2; i<=lesser; i++)
    {
        if(a%i==0 && b%i==0)
        {
            flag = 1;
            break;
        }
    }
    
    if(flag==1 || a==0 || b==0)
        printf("%d and %d are not co-prime", a, b);
    else
        printf("%d and %d are co-prime", a, b);

    return 0;
}
