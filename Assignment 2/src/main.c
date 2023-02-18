#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

#include "../inc/leapyear.h"

//Name: Mohamad Taha Daher
//Date: Feb 8, 2022
//Assignment 2

int main() {
    //print the title
    printf("Leap Year Checker\n");

    //prompt the user to enter values until they enter N
    while (1) {
        char inputString[5];    //store the user input as a string
        int year;               //store the year to be checked

        //Ask user to enter a year
        printf("Please enter the year to check ('N' to quit): ");
        scanf("%s", inputString);

        //convert the input string to uppercase n->N
        inputString[0] = toupper(inputString[0]);

        //if the first value is N break the loop
        if (inputString[0] == 'N') {
            printf("Quitting..\n");
            break;
        }
        //convert the input string to a number
        else {
            year = atoi(inputString);
            //if they entered less than 0
            if (year <= 0) {
                printf("Sorry that input is invalid\n");
                continue;
            }
            //call the leap year function to check if the number is a leap year or not
            else {
                if (leapYear(year)) {
                    printf("%d IS a leap year!\n", year);
                }
                else {
                    printf("%d IS NOT a leap year!\n", year);
                }
            }
        }
    }

    printf("THE LEAP YEARS PER CENTURY REPORT:\n");
    int year, century, leap_count;
    bool is_leap;

    for (century = 1; century <= 21; century++) {
        // Reset the count of leap years for each century
        leap_count = 0;
        //print the header of each century
        if (century < 21) {
            printf("Century #%d:   ", century);
            // Loop through each year in the century
            for (year = (century - 1) * 100 + 1; year <= century * 100; year++) {
                is_leap = leapYear(year);   //Check if the year is a leap year
                // If it's a leap year, increment the count and print the year
                if (is_leap) {
                    leap_count++;
                    printf("%d   ", year);
                }
            }
            //break line to end each century
            printf("\n");
        }
        else {
            printf("Century #21:   ");
            // Loop through each year in the century
            for (year = 2001; year <= 2020; year++) {
                is_leap = leapYear(year);
                if (is_leap) {
                    printf("%d   ", year);
                }
            }
            printf("\n");
            break;
        }
    }
    return 0;
}