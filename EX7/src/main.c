#include <stdio.h>
#include <stdbool.h>

#include "../inc/highScores.h"

#define MAX_ARRAY_SIZE 5

int main() {

    struct Player highScores[MAX_ARRAY_SIZE];
    //struct date Date [MAX_ARRAY_SIZE];

    int count= 0;

    do {
        printf("Enter the player name (Q to Quit):");
        scanf("%s", highScores[count].userName);

        //break if they entered a Q
        if (highScores[count].userName[0] == 'Q' && highScores[count].userName[1] == '\0') {
            break;
        }

        //Input the score
        printf("Enter the score:");
        scanf("%d", &highScores[count].score);

        //input the month
        printf("Enter the month:");
        scanf("%d", &highScores[count].date.month);

        //input teh day
        printf("Enter the day:");
        scanf("%d",&highScores[count].date.day);

        //input the year
        printf("Enter the year:");
        scanf("%d", &highScores[count].date.year);

        count++;

    }while(count < MAX_ARRAY_SIZE);

    printf("Quitting..\n");
    printHighScores(count, highScores);


    return 0;
}










