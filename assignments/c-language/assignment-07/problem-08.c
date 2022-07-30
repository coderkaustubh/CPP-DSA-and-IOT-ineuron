/*
    8. Write a program to find next Prime number of a given number.
*/


#include<stdio.h>
int main()
{
    int num, i, j, flag;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num<=0)
    {
        printf("2 is the next prime number ");
    }

    for(i=num+1; i<num+10000 && num>0; i++)
    {
        flag = 0;

        for(j=2; j<i; j++)
        {
            if (i%j==0)
            {
                flag = 1;
                break;
            }
        }

        if (flag==0)
        {
            printf("%d is the next prime number ", i);
            break;
        }
    }

    return 0;
}