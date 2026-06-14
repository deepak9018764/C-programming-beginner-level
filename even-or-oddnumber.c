//this function tells wether the given number by the user is even or odd through a user-defined functiom//
#include<stdio.h>
int a;
int add();
int main()
{
    
    printf("Enter the number u want to see wether it is a evn or odd\n");
    scanf("%d",&a);
    add();

    
}
int add()
{
    if(a%2==0){
       
        printf("The given number is even");

    }
    else{
        printf("The given number is odd");

    }
    return 0;
    
}

