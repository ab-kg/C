#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100

struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

struct Account accounts[MAX_ACCOUNTS];
int numAccounts = 0;

void createAccount() {
    if (numAccounts >= MAX_ACCOUNTS) {
        printf("Maximum number of accounts reached.\n");
        return;
    }

    struct Account newAccount;
    newAccount.accountNumber = numAccounts + 1001;  // Start account numbers from 1001

    printf("Enter name: ");
    scanf("%s", newAccount.name);

    printf("Enter initial balance: ");
    scanf("%f", &newAccount.balance);

    accounts[numAccounts++] = newAccount;
    printf("Account created successfully. Account number: %d\n", newAccount.accountNumber);
}

void deposit() {
    int accountNumber;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Account not found.\n");
}

void withdraw() {
    int accountNumber;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > accounts[i].balance) {
                printf("Insufficient funds.\n");
            } else {
                accounts[i].balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n", accounts[i].balance);
            }
            return;
        }
    }

    printf("Account not found.\n");
}

void displayAccount() {
    int accountNumber;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Account Number: %d\n", accounts[i].accountNumber);
            printf("Name: %s\n", accounts[i].name);
            printf("Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Account not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nBank Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Display Account\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                displayAccount();
                break;
            case 5:
                printf("Thank you for using the Bank Management System.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
