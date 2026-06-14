/*This program is to find cube of a number given by the user*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number u want to check the cube\n");
    scanf("%d", &a);
    b=a*a*a;
    printf("The cube of the given number is %d",b);
}