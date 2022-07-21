/*
    7. Write a program to check whether roots of a given quadratic equation are real & 
       distinct, real & equal or imaginary roots
*/

#include<stdio.h>
int main()
{
    int a, b, c, discriminant;
    printf("For the quadratic equation ax² + bx + c = 0\nEnter the value of a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant>0)
    {
       printf("real & distinct");
    }
    else if (discriminant==0)
    {
        printf("real & equal");
    }
    else
    {
        printf("imaginary roots");
    }
    return 0;    
}