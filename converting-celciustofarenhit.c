//This program will convert celsius temperature to farenheight//
#include<stdio.h>
int main()
{
    int farenheit,celsius;
    printf("Enter the temperature in celsius\n");
    scanf("%d",&celsius);
    farenheit= (celsius*9.0 / 5.0)+32.0;
    printf("The temperature in farenheit is %d:\n",farenheit);
    return 0;
    
}