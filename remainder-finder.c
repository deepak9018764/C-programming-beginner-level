// This is the program to print the reminder of two numbers given by the user/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("pls enter the first number\n");
    scanf("%d",&a);
    printf("pls enter the second number\n");
    scanf("%d",&b);
    c=a%b;
    printf("the reminder of the given two numbers is %d",c);
    getchar();


}
