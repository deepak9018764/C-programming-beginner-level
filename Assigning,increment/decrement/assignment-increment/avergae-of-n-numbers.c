//This program will calculate the average of 10 numbers demonstrating float data type
#include<stdio.h>
#define N 10 //symbolic constant
 main()
{
  int count;
  float average,sum,number;
  sum=0;
  count=0;
  while(count<N){
    scanf("%f", &number);
    sum=sum+number; //total of all the numbers
    count=count+1; //total numbers
  }
  average=sum/N;
  printf("N is%d sum is%f\n",N,sum);
  printf("The average of 10 given numbers is:%f",average);

}