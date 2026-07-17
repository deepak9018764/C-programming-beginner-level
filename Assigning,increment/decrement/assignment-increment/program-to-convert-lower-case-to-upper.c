//This program will convert the lower case character to uppercase

#include<stdio.h>
#include<ctype.h>// Character functions are available in ctype.h
 main()
{
    int lower,upper;
    lower=getchar();//The program will wait for the user to give a single charcter and hit enter
    upper=toupper(getchar());// Using to upper built in function and passing the argument as the value of getchar();
    putchar(upper);//we are printing the value of upper through putchar
}
