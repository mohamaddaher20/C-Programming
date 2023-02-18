//
// Created by Taha on 2023-02-08.
//

#ifndef EX7_HIGHSCORES_H
#define EX7_HIGHSCORES_H

struct Date {
    int month;
    int day;
    int year;
};

struct Player {
    char userName[15];
    int score;
    struct Date date;
};

void printHighScores(int count, struct Player * bestPlayers);

#endif //EX7_HIGHSCORES_H
