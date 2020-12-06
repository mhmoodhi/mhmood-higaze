#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define ROWS 50
#define COLUMNS 2
#define STATUS 0
#define CHECK 1
void openAcc(double amount);
void check(int account_number);
void enter(int account_number, double amount);
void Take(int account_number, double amount);
void closeAccount(int account_number);
void addInterest(int interest);
void printAccounts();
void closeBank();
