//This program will tell largest of three numbers by nested if-else
#include<stdio.h>
int main()
{ 
 int first,second,third, largest;
 printf("Enter first number\n");
 scanf("%d",&first);
 printf("Enter second number\n");
 scanf("%d",&second);
 printf("Enter third number\n");
 scanf("%d",&third);
 if(first>=second && first>=third){ //logical and relational operators are used with if else
   largest=first;
}else if(second>=third&& second>=first){// The program will only look into it when the upper if fails
   largest=second;
}
else{
   largest=third;

}
printf("The largest number is %d",largest);
}