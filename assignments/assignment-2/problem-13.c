/*
    13. Write a program to take a three-digit number from the user and rotate its digits by 
    one position towards the right
*/

#include<stdio.h>
int main()
{
    int num, x, y;
    printf("enter a three digit number: ");
    scanf("%d", &num);
    x = num%10;
    y = num/10;
    num = x*100 + y;
    printf("%d", num);
    return 0;
}