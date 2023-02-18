#include <stdio.h>

/*
    Using the program in example 2.6 (page 18) of the textbook as a guide
    create a program that stores the values 50 and 25 in two variables
    and outputs the result of adding, subtracting,  multiplying , and dividing them.

    Desired output:
        The sum of 50 and 25 is 75
        The difference of 50 and 25 is 25
        The product of 50 and 25 is 1250
        The result of dividing 50 by 25 is 2

    Then, uncomment and fix the indicated block of code.

    Desired output:
        The answer is 43
*/

int main() {

    // YOUR CODE HERE!!!

    //Declare variables with their data types
    int number1 = 50;
    int number2 = 25;

    //Addition
    int sum= number1 + number2;

    //Subtraction
    int difference= number1 - number2;

    //Multiplying
    int product= number1 * number2;

    //division
    int division= number1/number2;

    //Calculation
    printf("The sum of %d and %d is %d \n",number1, number2, sum);
    printf("The difference of %d and %d is %d\n",number1,number2,difference);
    printf("The product of %d and %d is %d\n", number1, number2,product);
    printf("The result of dividing %d by %d is %d\n", number1,number2,division);
    printf("");


    // SELECT FOLLOWING 5 LINES OF CODE, USE CRTL+/ TO UNCOMMENT, FIX THIS BLOCK OF CODE
    int total;
    total = 25 + 37 - 19;
    printf("The answer is %i\n", total);

    return 0;
}
