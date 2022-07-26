/*
    18. Write a program which takes the month number as an input and display number of 
        days in that month
*/

#include<stdio.h>
int main()
{
    int x;
    printf("enter a month number: ");
    scanf("%d", &x);
    if(x==2)
    {
        printf("Month number %d is February and it has 28 days", x);
    }
    else if (x==4 || x==6 || x==9 || x==11)
    {
        printf("Month number %d has 30 days", x);
    }
    else
    {
        printf("Month number %d has 31 days", x);
    }
    return 0;
}