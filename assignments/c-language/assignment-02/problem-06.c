/*
    6. Write a program which takes a character as an input and displays its ASCII code.
*/

#include<stdio.h>
int main()
{
    char x;
    printf("enter a character: ");
    scanf("%c", &x);
    printf("ASCII code of %c is %d", x, x);
    return 0;
}
