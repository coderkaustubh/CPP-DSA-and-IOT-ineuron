/*
    3. Write a program to check whether a given number is an even number or an odd number.
*/

#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if(x%2==0)
    {
        printf("%d is an even number ", x);
    }
    else
    {
        printf("%d is an odd number ", x);
    }
    return 0;
}
