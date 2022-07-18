/*
    5. Write a program to input a three-digit number and display the sum of the digits.
*/

#include<stdio.h>
int main()
{
    int a, b, c, x, sum;
    printf("enter a three digit number: ");
    scanf("%d", &x);
    c = x%10;
    x = x/10;
    b = x%10;
    a = x/10;
    sum = a+b+c;
    printf("sum of three digit is: %d", sum);
    return 0;
}