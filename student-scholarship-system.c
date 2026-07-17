//This program is the simulation of student scholarship system by the use of conditional operators
#include<stdio.h>
int main()
{
    int marks,income,atendance,result;
    char name[30];
     printf("Welcome to the student scholarship system\n");
    printf("Enter your name\n");
    scanf("%s",&name);
    printf("Enter the marks out of 600\n");
    scanf("%d",&marks); //50+
    printf("Enter the income\n");
    scanf("%d",&income);//-1laks
    printf("Enter the attendance out of 100 percent\n");
    scanf("%d",&atendance);//80+2
    if(marks>=500&income<=100000&atendance>=70){ //uae of relational and logical operator
         printf("\nCongratulation your scholarship is approved: %s",name);
    }
    else{
        printf("Sorry your scholarship can't be approved because u don't qualify the requirements");
    }
    return 0;
    getchar();
}