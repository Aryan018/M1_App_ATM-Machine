#include "fun.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
    
    int option;
    float balance = 15000.00;
    int choose;

    bool again = true;

    while (again) {
    mainMenu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &option);


        switch (option) {
            case 1:
            	
                checkBalance(balance);
                break;
            case 2:
            	
                balance = moneyDeposit(balance);
                break;
            case 3:
            	
                balance = moneyWithdraw(balance);
                break;

            case 4:
            	
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf(" 1-> Yes\n");
        printf(" 2-> No\n");
        scanf("%d", &choose);

       



        if (choose == 2) {
            again = false;
            menuExit();

        }

}


    return 0;
}//main code