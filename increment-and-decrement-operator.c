//This program will tell the working of increment and decrement operator
#include<stdio.h>
int main()
{
    int var1=5,var2=5;
    printf("%d\n", var1++); //because of postfix the value of the variable is returned firrst and then it will be incremented
    printf("%d\n",++var2); //because of prefix the value will be increment first and then returned
    return 0;
}