#include <stdio.h>

int main() {

    while(1) {

        int number1;
        int number2;
        int hcd = 0;


        printf("Please enter the first number: ");
        scanf("%d", &number1);

        printf("Please enter the second number: ");
        scanf("%d", &number2);

        if (number1<0 || number2<0) {
            printf("Sorry, you cannot enter a negative number!");
            return 1;
        }

        else if (number1 == 0 || number2 == 0) {
            printf("Sorry, you cannot enter 0");
            return 1;
        }

        else {
            //int result = hcd;
            for (int i =1 ; i<= number1 ; i++) {
                if (number1 % i == 0 && number2 % i == 0) {
                    hcd = i;
                }
            }
            printf("The HCD of %d and %d is: %d\n", number1, number2,hcd);
        }

        char wantContinue;
        printf("Do you want to continue (Y/N): \n");
        scanf(" %c", &wantContinue);

        if (wantContinue != 'Y'){
            break;
        }


    }


    return 0;
}
