//This program is an atm simulator
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main2();
int balance();
int deposit();
int detail();
int changepin();
int fastcash();
int reverify();
int statement();
int limit();
int inp;
int bal=100;
int main()
{
    FILE *f = fopen("data.txt", "r"); if(f){ fscanf(f, "%d", &bal); fclose(f); }
    int a,b;
    char z[50];
    printf("\nWelcome to ATM simulator\n");
    printf("Enter your registered username and pin to access your account\n");
    scanf("%s %d",&z,&a);
    if(strcmp(z,"deepak")==0&& a==9018){                                      //if(strcmp(user, "deepak") == 0 && pin == 9087){ 
        printf("Verification successful mr.%s.", z);
    }
    else{
        printf("Incorrect pin"); 
        reverify();
    }
    printf("\n1.Main Menu\n");
    printf("2.Exit\n");
    scanf("%d",&b);
    if(b==1){
        main2();
    }
    if(b==2){
        printf("Thanks for using the ATM simulation");
         exit(0);
        }
        getchar();
}
int main2()
{
     int b;
    printf("\n1.Check Balance\n");
    printf("2.Account Detail\n");
    printf("3.Change Pin\n");
    printf("4.Fast Cash\n");
    printf("5.Mini Statement\n");
    printf("6.Daily Withdrawl limit\n");
    printf("7.Exit\n");
    scanf("%d",&inp);
    if(inp==1){
      balance();
    }
    if(inp==2){
      detail();
    }
    if(inp==3){
      changepin();
    }
    if(inp==4){
      fastcash();
    }
    if(inp==5){
      statement();
    }
    if(inp==6){
      limit();
    }
    if(inp==7){
        printf("Thankyou for using ATM simulator\n");
        exit(0);

    }
}
   
int balance()
{
    int c, correct_pin=9018,input_pin;
    printf("Enter your pin to check the balance\n");
    scanf("%d",&input_pin);
    if(correct_pin==input_pin){
        printf("Your account's balance is%d",bal);
        main2();
    }
    else{
        printf("Entered Wrong Pin");
        main2();
         return bal;
    }
    
   
}

int detail()
{
 printf("Account Holder-DEEPAK SHARMA\n");
 printf("Account Number-9012762389\n");
 printf("Balance: %d",bal);
 main2();

}
int changepin()
{
     
}

int fastcash()
{
int r;
printf("Enter the amount u need\n");
scanf("%d",&r);
if(r<=bal){
     bal=bal-r;
       FILE *f = fopen("data.txt", "w"); if(f){ fscanf(f, "%d", &bal); fclose(f); }
     printf("U had withdrawl the cash of %d rs",r);
     main2();
}
else{
    printf("Insufficient amount\n");
    main2();
}
}
int statement()
{
    
}
int limit()
{
    
}
int deposit()
{

}
int reverify()
{
    
int a,b,z;
    printf("\nRe-enter your pin\n");
    scanf("%d",&a);
     if(strcmp(z,"deepak")==0&& a==9018){ 
       
    }
    else{
        printf("Incorrect pin, Access Denied");
         exit(0);
    }

}

