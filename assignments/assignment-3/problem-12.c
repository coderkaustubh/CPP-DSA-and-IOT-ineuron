/*
    12. Write a program to check whether a given alphabet is in uppercase or lowercase.
*/

#include<stdio.h>
int main()
{
    char alph;
    printf("enter a alphabet: ");
    scanf("%c", &alph);
    if(alph>='A' && alph<='Z')
    {
        printf("%c is an uppercase alphabet ", alph);
    }
    else if(alph>='a' && alph<='z')
    {
        printf("%c is a lowercase alphabet ", alph);
    }
    else
    {
        printf("%c is not an alphabet ", alph);
    }
    return 0;
}