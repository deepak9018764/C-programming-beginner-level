//This progam will print the square of the number given by the user//
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the number\n");
    scanf("%i", &a);
    b=a*a;
    printf("The square of the number is %d",b);
    return 0;
    getchar();
}