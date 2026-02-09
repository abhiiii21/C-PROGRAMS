// BANKING SYSTEM PROJECT
#include <stdio.h>
void checkbalance(float balance);
float deposit();
float withdraw(float balance);
void main()
{
  float balance = 0.0f;
  int choice;
  do
  {
    printf("WELCOME TO OUR BANK\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
      case 1:
        checkbalance(balance);
        break;
      case 2:
        balance += deposit();
        break;
      case 3:
        balance -= withdraw(balance);
        break;
      case 4:
        printf("Thank you for using our banking system!\n");
        break;
      default:
        printf("Invalid choice. Please try again.\n");
    }
  } while (choice != 4);
  
}
void checkbalance(float balance)
{
    printf("Your current balance is: $%.2f\n", balance);
}
float deposit()
{
    float amount;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);
    if (amount > 0) {
        printf("You have deposited: $%.2f\n", amount);
        return amount;
    } else {
        printf("Invalid amount. Deposit must be greater than zero.\n");
        return 0.0f;
    }
}
float withdraw(float balance)
{
    float amount;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= balance) {
        printf("You have withdrawn: $%.2f\n", amount);
        return amount;
    } else if (amount > balance) {
        printf("Insufficient funds. Your current balance is: $%.2f\n", balance);
        return 0.0f;
    } else {
        printf("Invalid amount. Withdrawal must be greater than zero.\n");
        return 0.0f;
    }
}
