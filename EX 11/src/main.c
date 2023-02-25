#include <stdio.h>
#include <string.h>
#include "../inc/binOps.h"

#define NUMBITS 32

int main() {
    int firstNumber;
    char operator[3];
    int secondNumber;
    int numToShift;
    char outputResult[33];
    unsigned int result;

    // TODO: Ask the user to enter a positive unsigned integers
    printf("Please enter a positive integer value:");
    scanf("%d", &firstNumber);

    // TODO: Ask the user which operation to perform (&, |, ^, <<, >>)
    printf("Please enter an operator (&, |, ^, <<, >>) :");
    scanf("%s", operator);

    // TODO: If they entered an operator that requires a second number, ask for one
    if (strcmp(operator, "&") == 0 || strcmp(operator, "|") == 0 || strcmp(operator, "^") == 0) {
        printf("Please enter another positive integer value:");
        scanf("%d", &secondNumber);
    }

    // TODO: If they entered a shift operator, ask how many places to shift
    if (strcmp(operator, "<<") == 0 || strcmp(operator, ">>") == 0) {
        printf("Please enter the number of spaces to shift the bits:");
        scanf("%d", &numToShift);
    }

    // TODO: if they entered a wrong operator, print an error and return 1
    if (strcmp(operator, "&") != 0 && strcmp(operator, "|") != 0 && strcmp(operator, "^") != 0
        && strcmp(operator, "<<") != 0 && strcmp(operator, ">>") != 0) {
        printf("Sorry, bad operator.\n");
        return 1;
    }
    // TODO: Perform the requested operation if valid
    if (strcmp(operator, "&") == 0) {
        result = firstNumber & secondNumber;
    } else if (strcmp(operator, "|") == 0) {
        result = firstNumber | secondNumber;
    } else if (strcmp(operator, "^") == 0) {
        result = firstNumber ^ secondNumber;
    } else if (strcmp(operator, "<<") == 0) {
        result = firstNumber << numToShift;
    } else if (strcmp(operator, ">>") == 0) {
        result = firstNumber >> numToShift;
    }

    // TODO: Use the provided function to show the result in text
    getBinary(result, 32, outputResult);
    printf("The result is: %s - %d\n", outputResult, result);

    return 0;
}












