/*
    15. Write a program to check whether a given number is positive, negative or zero.
*/

#include<stdio.h>
int main()
{
    int x;
    printf("enter a integer: ");
    scanf("%d", &x);
    if(x==0) {
        printf("%d is zero ", x);
    } else if(x>0) {
        printf("%d is a positive number ", x);
    } else {
        printf("%d is a negative number ", x);
    }
    return 0;
}