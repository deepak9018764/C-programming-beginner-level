//This program is a employ management systen
#include<stdio.h>
int add();
int incre();
char a[30];
char detail();
int main()
{  int b; 
    FILE *f = fopen("data.txt", "r"); if(f){ fscanf(f, "%s", &a); fclose(f); } 
    printf("Pls choose from the option\n");
    printf("1.Add Employee\n");
    printf("2.Increment Salary BY 10 perceent\n");
    printf("3.View Details\n");
    scanf("%d",&b);
    if (b==1){
        add();
    }
    if(b==2){
        incre();
    }
    if (b==3){
        detail();
    }

}
int add()
{  
    
    printf("Add the name of the employ\n");
    scanf("%s",&a);//deepak
    printf("Employ added:%s",a);
    FILE *f = fopen("data.txt", "w"); fprintf(f, "%s", a); fclose(f);
    return a;
}
int incre()
{
    int b,c;
    printf("enter the current salary\n");
    scanf("%d",&b);//2000
    c=b*10/100;//200
    c+=b;
    printf("Salary increased by 10 percent: %drs",c);
    return c;


    
}
char detail()
{
    printf("Employer name:%s",a);
    return a;
}
