//This program will greet me on my birthday and tell me how much old i am
#include<stdio.h>
int age();
char* greet();
int main()
{  int a,b;
   printf("Choose the option u would like to use\n");
   printf("1-calculate current age\n");
   printf("2-print a birthday greeting message\n");
   scanf("%d",&a);
   if(a==1){
     age();
   }
   if(a==2){
    greet();
   }
  
   getchar();
}
int age()
{   int year,date;
    printf("enter your year of birth\n");//2002
    scanf("%d",&year);
    date=2026-year; //2026-2002
    printf("your age is: %d",date);
    return date;
}
char* greet()
{
    static char a[30];
    printf("enter your name\n");
    scanf("%s",a); 
    printf("A VERY HAPPY BIRTHDAY TO YOU:%s",a);
    return a;


    


}