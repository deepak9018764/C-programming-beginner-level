//This program will illustrate the use of library functions
#include<stdio.h>
int main()
{
    int i= -10,d=10,e=2;
    float rad=1.57;
    double d1=2.0,d2=3.0;
    pirntf("%d\n",abs(i));// gives the absolute vaue of i
    printf("%F", sin(rad));//gives the sin of rad
    printf("%F", cos(rad));//gives the cos of rad
    printf("%F", exp(rad));//gives the exponent of rad
    printf("%F", log(rad));//gives the natural logarith value
    printf("%f",pow(d1,d2));//gives the power of di and d2 which is d1 raise to the power d2
}