#include <stdio.h>
float balance = 1000.0;

void checkBalance() {
    printf("Your current balance is: $%.2f\n", balance);
}

void deposit(float amount) {
    if(amount > 0) {
        balance += amount;
        printf("Successfully deposited $%.2f\n", amount);
    } else {
        printf("Invalid deposit amount!!\n");
    }
}

void withdraw(float amount) {
    if(amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Successfully withdraw $%.2f\n", amount);
    } else if(amount > balance) {
        printf("Insufficient balance..!!\n");
    } else {
        printf("Invalid withdrawal amount!!\n");
    }
}

int main() {
    float amount;
    int choice;

    while(1) {
        printf("\n=========ATM MENU========\n");
        printf("1.Check Balance\n");
        printf("2.Deposit Money\n");
        printf("3.Withdraw Money\n");
        printf("4.Exit\n");
        printf("=========================\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 4:
                printf("Thank you for using the ATM.. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");

        }
    }
    return 0;
}



