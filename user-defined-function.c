//This program is to declare a user defined function//
#include<stdio.h>
int substract();
int a;
int main()
{ 
   
    printf(" Please enter the number\n");
    scanf("%d",&a);
    printf("By substracting 10 from the number given by you is  %d",substract());
    return 0;

}
    int substract()
    {
      int b,d;
      b=10;
      d=a-b;
       
        
        return d;
    }
