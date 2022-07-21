/*
    9. Write a program to find the greatest among three given numbers. Print number once 
       if the greatest number appears two or three times.
*/

#include<stdio.h>
int main()
{
    int x, y, z;
    printf("enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    if(x>=y && x>=z)
    {
        printf("%d is the gretest number ", x);
    }
    else if(y>=z)
    {
        printf("%d is the gretest number ", y);
    }
    else
    {
        printf("%d is the gretest number ", z);
    }
    return 0;
}