#include <stdio.h>

int checkBalance(int balance) {
    printf("Your current balance is: %d\n", balance);
    return balance;
}

int deposit(int balance) {
    int amount;
    printf("Enter the amount you want to deposit: ");
    scanf("%d", &amount);
    balance += amount;
    printf("Deposited: %d\n", amount);
    return balance;
}

int withdraw(int balance) {
    int amount;
    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &amount);
    if (amount <= balance) {
        balance -= amount;
        printf("Withdrawn: %d\n", amount);
    } else {
        printf("Insufficient balance\n");
    }
    return balance;
}

int main() {
    int balance = 0;
    int choice;

    do {
        printf("Choose an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                balance = checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the ATM!\n");
                break;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}


