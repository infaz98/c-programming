#include <stdio.h>

//Bank transaction demo
int main(){

    char transactionCode;
    int amount;

    //initial account value is defined as 50,000
    int balance = 50000;

    printf("Bank balance is : %d\n\n", balance);
    printf("Withdrawal -‘W’\nDeposit - 'D'\n\n");

    printf("Please enter the transaction type: ");
    scanf("%c", &transactionCode);

    printf("Please enter the amount for the transaction: ");
    scanf("%d", &amount);

    switch (transactionCode)
    {
    case 'W':
        balance = balance - amount;
        printf("New balance is %d\n", balance);
        break;
    
    case 'D':
        balance = balance + amount;
        printf("New balance is %d\n", balance);
        break;

    default:
        printf("Invalid selection\n");
        break;
    }

    return 0;
}