
/* Name: Mohamad Taha Daher
   Date: January 14, 2023
   Assignment #1 */

#include <stdio.h>


int main() {
    //Declare and initialize variables
    int dimension = 10;
    //int i = 0;
    //int j = 0;

    //Print the output message
    printf("TABLE OF PRODUCTS");
    printf("\n");

    //print out the N and then list the first column of heading with break line at the end.
    printf("%5s", "N");
    for (int i = 1; i <= dimension; i++)
        printf("%5d", i);
    printf("\n");

    //Nested for loop for the output of the rows it goes from 1 to 10 increase by 1 each time.
    for (int i = 1; i <= dimension; i++) {
        printf("%5d", i);
        for (int j = 1; j <= dimension; j++) {
            printf("%5d", i * j);
        }
        printf("\n");
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Print output message
    printf("\n");
    printf("REVERSED TABLE OF PRODUCTS");
    printf("\n");

    //print the first column with N
    printf("%5s", "N");
    for (int i = 10; i >= 1; i--)
        printf("%5d", i);
    printf("\n");

    //While loop to print the rows when the two numbers are multiplied.
    int i=10;   //starting value of 10
    while(i>=1){
        printf("%5d", i);

        int j=10;
        while(j>=1){
            printf("%5d", i * j);
            j--;    //decreasing by 1
        }
        i--;
        putchar('\n');
    }

    return 0;
}
//done
