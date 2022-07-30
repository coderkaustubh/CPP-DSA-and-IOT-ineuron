/*
    9. Write a program to check whether a given number is an Armstrong number
       or not.
*/


#include<stdio.h>
int main()
{
    int num, digit, sum=0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(num>0)
    {
        digit = num%10;
        num = num/10;
        
        sum = sum + digit*digit*digit;
    }

    if (sum==temp)
    {
        printf("%d is an Armstrong number", temp);
    }
    else
    {
        printf("%d is not an Armstrong number", temp);
    }

    return 0;  
}