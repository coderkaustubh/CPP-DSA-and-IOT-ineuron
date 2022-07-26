/*
    4. Write a program to swap values of two int variables without using a third variable.
*/

#include<stdio.h>
int main()
{
    int a, b;
    printf("enter number a: ");
    scanf("%d", &a);
    printf("enter number b: ");
    scanf("%d", &b);
    printf("a = %d and b = %d \n", a, b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("after swapping: \na = %d and b = %d", a, b);
    return 0;
}