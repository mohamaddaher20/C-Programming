//
// Created by Mohamad Taha on 2023-02-08.
//

#include "../inc/highScores.h"
#include <stdio.h>

void printHighScores(int count, struct Player * bestPlayers) {
    printf("High Scores\n");
    for (int i=0; i< count ; i++) {
        printf("%s     %d     %d/%d/%d \n", bestPlayers[i].userName, bestPlayers[i].score,
               bestPlayers[i].date.month, bestPlayers[i].date.day, bestPlayers[i].date.year);
    }
}





