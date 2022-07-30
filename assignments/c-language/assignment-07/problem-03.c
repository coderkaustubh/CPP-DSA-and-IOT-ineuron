/*
    3. Write a program to check whether a given number is there in the Fibonacci
       series or not.
*/


#include<stdio.h>
int main()
{
    int a=0, b=1, i, N, temp, flag=0;
    printf("Enter a number: ");
    scanf("%d", &N);

    for(i=3; b<=N; i++)
    {
        temp = b;
        b = a+b;
        a = temp;
        
        if (b==N)
        {
            flag = 1;
            break;
        }
    }

    if (N==0)
    {
        printf("0 is there in fibonacci series at position 1");
    }
    else if (N==1)
    {
        printf("1 is there in fibonacci series at position 2 and 3");
    }
    else if (flag == 1)
    {
        printf("%d is there in fibonacci series at position %d", N, i);
    }
    else
    {
        printf("%d is not there in fibonacci series", N);
    }

    return 0;
}