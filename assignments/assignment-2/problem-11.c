/*
    11. Write a program to input a number from the user and also input a digit. Append a 
    digit in the number and print the resulting number. (Example - number=234 and 
    digit=9 then the resulting number is 2349)
*/

#include<stdio.h>
int main()
{
    int num, digit;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("enter a digit: ");
    scanf("%d", &digit);
    num = num*10 + digit;
    printf("num = %d", num);
    return 0;
}