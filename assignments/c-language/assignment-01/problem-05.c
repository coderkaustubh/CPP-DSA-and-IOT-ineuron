/*
    5. WAP to calculate the length of String using printf function.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter a string: ");
    scanf("%s", str);
    printf("length of str is %d", strlen(str));
    return 0;

}