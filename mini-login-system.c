//This program is the mini login systme
#include<stdio.h>
#include<string.h>
int main()
{
    char user[50];
    int password;
    printf(" Welcome back!\n");
    printf("Enter username\n");
    scanf("%s", user);
    printf("Enter Password\n");
    scanf("%d", &password);
    if (strcmp(user, "deepak") == 0 && password == 9018) { //string comparison
        printf("Access Granted, welcome deepak sharma");
    }
    else{
        printf("Don't use others account u thief");
    }




}