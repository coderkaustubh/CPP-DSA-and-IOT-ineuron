/*
    8. Write a program to check whether a given number is a Prime number or not.
*/


#include<stdio.h>
int main()
{
    int n, i, flag=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(i=2 ; i<n ; i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }

    if(n==1)
    {
        printf("%d is niether prime nor composite", n);
    }
    else if (flag == 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}
