// This program will calculate the simple interest for u//
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the principal amount\n");
    scanf("%d",&a);
    printf("Enter the rate of interest\n");
    scanf("%d",&b);
     printf("Enter the total time\n");//pls type in years only//
    scanf("%d",&c);
    d=a*b*c/100;
    printf("The simple interest is %d",d);

}