/*
    16. Write a program to check whether a given character is an alphabet (uppercase), an 
        alphabet (lower case), a digit or a special character.
*/

#include<stdio.h>
int main()
{
    char alph;
    printf("enter a character: ");
    scanf("%c", &alph);
    if(alph>='A' && alph<='Z')
    {
        printf("%c is an uppercase alphabet ", alph);
    }
    else if(alph>='a' && alph<='z')
    {
        printf("%c is a lowercase alphabet ", alph);
    }
    else if(alph>='0' && alph<='9')
    {
        printf("%c is a digit ", alph);
    }
    else
    {
        printf("%c is a special character ", alph);
    }
    return 0;
}