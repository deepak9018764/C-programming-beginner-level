// This is a menu driven program where user can choose what option he/she wants to take
#include<stdio.h>
int square();
int cube();
int temp();
int area();
int interest();
int add();
int even_odd();
int rem();
int vote();

int main()
{   char name[30];
    int a,b;
    printf("Hey there! choose an option u would like to use \n");
    printf("1: Square of a number\n");
    printf("2: Cube of a number\n");
    printf("3: Calculate simple interest\n");
    printf("4: Area of a rectangle\n");
    printf("5: Addition of 3 numbers\n");
    printf("6: Convert celsius to farenheit\n");
    printf("7: Wether the number is even or odd\n");
    printf("8: Find the remainder\n");
    printf("9: Voting eligibility\n");
    scanf("%d",&a);
    if (a==1){
        square();
    }
    if (a==2){
        cube();
    }
    if (a==3){
        interest();
    }
    if (a==4){
        area();
    }
    if (a==5){
        add();
    }
    if (a==6){
        temp();
    }
    if (a==7){
        even_odd();
    }
    if (a==8){
        rem();
    }
    if (a==9){
        vote();
    }

    return 0;
   

}
int square()
{  int c,d;
    printf("enter the number u want to know the square of\n");
    scanf("%d",&c);
    d=c*c;
    printf("The square if given number is %d",d);
    return d;

}
int cube()
{  int e,f;
    printf("enter the number u want to know the cube of\n");
    scanf("%d",&e);
    f=e*e*e;
    printf("The square if given number is %d",f);
    return f;

}
int temp()
{  int celsius,farenheit;
    printf("Enter the temperature in celsius\n");
    scanf("%d",&celsius);
    farenheit=(celsius*9.0/5.0)+32.0;
    printf("The farenheit temperature is: %d",farenheit);
    return farenheit;

}
int area()
{
    int a,b,c;
    printf("Enter the lenght and width\n");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("The area of the rectangle is%d",c);
    return c;


}
int interest()
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
    return d;

}
int add()
{
   int a,b,c,d;
  printf("enter the first number\n");
  scanf("%d",&a);
  printf("enter the second number\n");
  scanf("%d",&b);
  printf("enter the third number\n");
  scanf("%d",&c);
  d=a+b+c;
  printf("The sum of your three numbers is %d",d);
  return d;
}
int even_odd()
{   int a,b;
    printf("enter the number u want to check:\n");
    scanf("%d",&a);
    if (a%2==0){
        printf("The given number is even");

    }
    else{
        printf("The given number is odd");
    }
    return a;

    
}
int rem()
{
       int a,b,c;
    printf("pls enter the first number\n");
    scanf("%d",&a);
    printf("pls enter the second number\n");
    scanf("%d",&b);
    c=a%b;
    printf("the reminder of the given two numbers is %d",c);
    return c;
}

int vote()
{
   int a;
    printf("Enter your age\n");
    scanf("%d",&a);
    if (a<18)
    {
        printf("You are not eligible to vote");
    }
    else{
        printf("You are eligible to vote");
    }
    return a;
}
