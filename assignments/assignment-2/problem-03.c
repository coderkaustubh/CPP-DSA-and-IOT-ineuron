/*
    3. Write a program to swap values of two int variables
*/

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter number a: ");
    scanf("%d", &a);
    printf("enter number b: ");
    scanf("%d", &b);
    printf("a = %d and b = %d \n", a, b);
    c = a;
    a = b;
    b = c;
    printf("after swapping: \na = %d and b = %d", a, b);
    return 0;
}