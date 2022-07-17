/*
    6. WAP to print the name of the user in double quotes.

    Expected output format – “Hello , Amit Kumar”
*/

#include<stdio.h>

int main()
{
    char name[25];
    printf("enter your name: ");
    scanf("%[^\n]s", name);
    printf("\"Hello , %s\"", name);
    return 0;
}