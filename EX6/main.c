#include <stdio.h>
#include <stdbool.h>

/*
 * First take the code from our leap.c sample file in the Resources for the Making Decisions
 * lecture and refactor it into a function that returns true or false if a passed in year
 * is a leap year or not. Call it from the main function to make sure it works.
 *
 * Then create a new function that takes in the year and a numeric code for a month, i.e. 1 = January,
 * 2 = February, and so forth. Have it return the number of days in that month. Make sure to make
 * use of your new leap year function so you can correctly tell if February has 28 or 29 days that
 * year.
 *
 * Also, return a message of "Bad year" if a year between 1 and 9999 not entered and return 1 error code.
 * Return a message of "Bad month" if a month between 1 and 12 not entered and return 1 error code.
 *
 * NOTE: This would be a great job for a switch-case statement!!
 * REMINDER: "30 days has September, April, June, and November".
 */

// ADD NEW FUNCTIONS HERE
bool leapYear(int year) {
//    int rem_4, rem_100, rem_400;
//    rem_4 = year % 4;
//    rem_100 = year % 100;
//    rem_400 = year % 400;
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int daysInMonth(int year, int month) {
    int days = 0;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            if (leapYear(year)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            printf("Bad month\n");
            return 1;
    }
    return days;
}

int main() {
    int year, month;
    printf("Please enter the year: ");
    scanf("%d", &year);
    if (year < 1 || year > 9999) {
        printf("Bad year\n");
        return 1;
    }

    printf("Please enter the month: ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Bad month\n");
        return 1;
    }


    int numDays = daysInMonth(year, month);
    printf("That month has/had %d days", numDays);


    return 0;

}





















