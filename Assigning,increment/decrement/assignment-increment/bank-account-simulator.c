//This program will work as an bank account simulator
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int deposit();
int balance();
int withdraw();
int detail();
int main2();
int main3();
int ver;
int bal3=1000;
int bal;
int deposit2();
int balance2();
int withdraw2();
int detail2();
int bal32=10;
int bal2;
int main()
{    
    FILE *f = fopen("data.txt", "r"); if(f){ fscanf(f, "%d", &bal3); fclose(f); }//A file is saving and updating the values of variables
    int a;
    long long pin;
    char user[50];
    printf("Welcome to our banking system\n");
    printf("Dear customer please follow the instructions carefully\n");
    printf("Please provide your registered username:"); //user authentication
    scanf("%s",user);
    printf("Please provide your pin:");
    scanf("%lld",&pin);
    if(strcmp(user, "deepak") == 0 && pin == 9087){ 
    printf("\nThankyou for verification Mr.%s\n",user);
    printf("\nPlease choose the option-\n");
     printf("1.Banking Options\n");
    printf("2.Exit\n");
    scanf("%d",&ver);
    if(ver==1){
        main3();
    }
   
    else{
        printf("Goodbye! Exiting the program.\n");
         exit(0); 

    }
    
}
 else if(strcmp(user, "rohit") == 0 && pin == 9018){  //user 2
      FILE *f = fopen("data2.txt", "r"); if(f){ fscanf(f, "%d", &bal32); fclose(f); }
     printf("\nThankyou for verification mr.%s\n",user);
    printf("\nPlease choose the service u want to opt for\n");
    printf("1.Banking Options\n");
    printf("2.Exit\n");
    scanf("%d",&ver);
    if(ver==1){
        main2();
    }
   
    else{
        printf("Goodbye! Exiting the program.\n");
         exit(0); 

    }
   
 }


     else{
        printf("Warning! Authentication failled");
       
     }
    return 0;
    getchar();

}





int deposit()
{  int b;
    printf("Enter the amount u need to deposit in your bank account:\n");
    scanf("%d",&bal); //2000
    printf("!Your amount is deposited successfully!:%drs",bal);
    bal3=bal3+bal;
    FILE *f = fopen("data.txt", "w"); fprintf(f, "%d", bal3); fclose(f);
    balance();
    main3();
    return bal;
    
}
int deposit2()
{  int b2;
    printf("Enter the amount u need to deposit in your bank account:\n");
    scanf("%d",&bal2); //2000
    printf("!Your amount is deposited successfully!:%drs",bal2);
    bal32=bal32+bal2;
    FILE *f = fopen("data2.txt", "w"); fprintf(f, "%d", bal32); fclose(f);
    balance2();
     main2();
    return bal2;
    
}
int balance()
{
    int a;
    printf("\nDo u need to check balance:\n");
    printf("1-yes\n");
    printf("2-no\n");
    scanf("%d",&a);
    if (a==1){
        printf("Your remanining balance:%d",bal3);
        
    }
    else
    printf("Thankyou for banking with us\n");
    main3();
    return bal;

}
int balance2()
{
    int a2;
    printf("\nDo u need to check balance:\n");
    printf("1-yea\n");
    printf("2-no\n");
    scanf("%d",&a2);
    if (a2==1){
        printf("Your remaining Balance:%d",bal32);
        
    }
    else
    printf("Thankyou for banking with us\n");
     main2();
    return bal2;

}
int withdraw()
{
 int a;
 int correctpin=9018;
 int entered_pin;
 printf("Enter your four digit pin\n");
 scanf("%d",&entered_pin);
 if(correctpin!=entered_pin)
 {
    printf("Incorrect pin, Access-Denied!");
    main3();
 }
 printf("Enter the amount u want to withdrawl:\n");
 scanf("%d",&a);
 if(a>bal3){
    printf("Insufficient Balance");

 }
 else{
 bal3=bal3-a;
 printf("U had witdraw an amount of total: -%d\n",a);
 printf("\n New Balance:%drs",bal3);
 FILE *f = fopen("data.txt", "w"); fprintf(f, "%d", bal3); fclose(f);
 main3();
 return bal3;
 }
}

 
 
int withdraw2()
{
 int a2, correct_pin=9018,entered_pin;
 printf("Enter your four digit pin\n");
 scanf("%d",&entered_pin);
 if(correct_pin!=entered_pin){
    printf("Incorrect pin, Access Denied");
     main2();
 }
 printf("Enter the amount u want to withdrawl:\n");
 scanf("%d",&a2);
 if(a2>bal32){
    printf("Insufficient balance");

 }
 else{
 bal32=bal32-a2;
 printf("U had witdraw an amount of total: -%d\n",a2);
 printf("\n New Balance:%drs",bal32);
 FILE *f = fopen("data2.txt", "w"); fprintf(f, "%d", bal32); fclose(f);
  main2();
 return bal32;
 
 }
 
}



int detail()
{

    printf("Account Holder: Deepak Sharma\n");
    printf("Account Number: 5625362263\n");
    printf("Balance:%d\n", bal3);
    main3();
    return 0;

}
int detail2()
{

    printf("Account Holder: Rohit Sharma\n");
    printf("Account Number: 9087362263\n");
    printf("Balance:%d\n", bal32);
     main2();
    return 0;

}

int main2()
{
    int a;
    printf("\n1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.Check Balance\n");
    printf("4.Account Information\n");
    printf("5 Close App\n");
    scanf("%d",&a);
    if (a==1){
         deposit2();
    }
    if (a==3){

        balance2();
    }
    if (a==2){
        withdraw2();
    }
    if (a==4){
        detail2();
    }
    if (a == 5) {
    printf("Goodbye! Thankyou for banking with us.\n");
    exit(0); 
 }
}
int main3()
{
    int a;
    printf("\n1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.Check Balance\n");
    printf("4.Account Detail\n");
    printf("5 Close App\n");
    scanf("%d",&a);
    if (a==1){
         deposit();
    }
    if (a==3){

        balance();
    }
    if (a==2){
        withdraw();
    }
    if (a==4){
        detail();
    }
    if (a == 5) {
    printf("Goodbye! Thankyou for banking with us.\n");
    exit(0); 
 }
}

