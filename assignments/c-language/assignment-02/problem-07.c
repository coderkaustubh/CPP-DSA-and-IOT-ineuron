/*
    7. Write a program to find the position of first 1 in LSB.
*/

#include<stdio.h>
int main()
{
    int num, count = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        count++;
        if (num&1 == 1)
        {
            break;
        }
        num = num>>1;
    }
    printf("%d", count);
    return 0;
}