#include "../Inc/fun.h"
float moneyDeposit(float balance) {
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("$$$$Your Balance is: Rs%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &deposit);


    balance += deposit;

    printf("\n****Your New Balance is:   Rs%.2f\n\n", balance);
    return balance;

}//money deposit
