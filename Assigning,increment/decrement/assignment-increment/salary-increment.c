//This program will calculate the incremented salary of a employ
#include<stdio.h>
int main()
{
    int salary, incre;
    printf("Enter your current salary\n");
    scanf("%d",& salary); //20000
    printf("incremented by:\n");
    scanf("%d",&incre);//10
    incre=salary*incre/100;
    salary+=incre;//assignment operator
    printf("Incremented salary:%d",salary);
    return 0;
    getchar();

}