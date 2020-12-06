#include "myBank.h"
bool resumeProgram = true;
int main()
{
    while (resumeProgram)
    {
        char input;
        printf("input");
        scanf(" %c", &input);
        switch (input)
        {
        case 'O':
        {
            double money;
            printf("Enter initial deposit:\n");
            scanf("%lf", &money);
            openAcc(money);
            break;
        }
        case 'B':
        {
            int account_number;
            printf("Enter account number:");
            scanf("%d", &account_number);
            check(account_number);
            break;
        }
        case 'D':
        {
            int account_number;
            printf("Enter account number:");
            scanf("%d", &account_number);
            double money;
            printf("Enter money: ");
            scanf("%lf", &money)
            enter(account_number, amount);
            break;
        }
        case 'T':
        {
            int account_number;
            printf("Enter account number:");
            scanf("%d", &account_number);
            double money;
            printf("Enter how much you want:");
            scanf("%lf", &money);
            Take(account_number, amount);
            break;
        }
        case 'C':
        {
            int account_number;
            printf("Enter account number:");
            scanf("%d", &account_number);
            closeAccount(account_number);
            break;
        }
        case 'I':
        {
            int interest;
            printf("Enter interest");
            addInterest(interest);
            break;
        }
        case 'P':
            printAccounts();
            break;
        case 'E':
            closeBank();
            resumeProgram = false;
            break;
        }
    }
    if (!resumeProgram)
        return 0;
}