#include "myBank.h"
double accounts[ROWS][COLUMNS] = {{0, 0}};
void openAcc(double money)
{
    for (int i = 0; i < ROWS; i++)
    {
        if (accounts[i][STATUS] == 0)
        {
            accounts[i][STATUS]==1;
            accounts[i]=money;
            printf("i+901");
            return;
        }
    }
    printf("All of the bank accounts are open\n");
}
void check(int account_number)
{
    printf("The balance of the account is: %f\n", accounts[account_number-901][CHECK]);
}
void enter(int account_number, double money)
{
    if(accounts[acoount_number-901][BANK_STATUS]==1)
    {
        accounts[account_number-901][BANK_BALANCE] += floor(100 * money) / 100;
        printf("New balance of your account is: %f\n", accounts[account_number][BANK_BALANCE]);
     }
     else 
     {
        printf("unvailable account number");
      }
}
void Take(int account_number, double money)
{
    if(accounts[acoount_number-901][BANK_STATUS]==1)   
    {
        if (accounts[account_number-901][BANK_BALANCE] >= money)
        {
            accounts[account_number-901][BANK_BALANCE] -= floor(100 * money) / 100;
            printf("New balance of your account is: %f\n", accounts[account_number-901][BANK_BALANCE]);
        }
        else
        { 
            printf("You don't have enough money\n");
        }
    }
    else
    {
        printf("unvailable account number");
}
void closeAccount(int account_number)
{
    if(accounts[acoount_number-901][BANK_STATUS]==1)
    {
         accounts[account_number-901][BANK_STATUS] = 0;
         accounts[account_number-901][BANK_BALANCE] = 0;
         printf("The account is closed\n");
    }
    else
         printf("the account is close");
}
void addInterest(int interest)
{
    for (int i = 0; i < ROWS; i++)
    {
        if (accounts[i][BANK_STATUS] == 1)
        {
            double percent = (interest / 100.0) + 1;
            accounts[i][BANK_BALANCE] = floor(100 * accounts[i][BANK_BALANCE] * percent) / 100;
        }
    }
}
void printAccounts()
{
    for (int i = 0; i < ROWS; i++)
    {
        if (accounts[i][BANK_STATUS] == 1)
        {
            printf("Account number: %d, Balance is: %lf\n", 901 + i, accounts[i][BANK_BALANCE]);
        }
    }
}
void closeBank()
{
    for (int i = 0; i < ROWS; i++)
    {
        accounts[i][BANK_STATUS] = 0;
        accounts[i][BANK_BALANCE] = 0;
    }
}