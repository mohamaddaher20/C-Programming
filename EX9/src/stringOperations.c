//
// Created by Taha on 2023-02-15.
//

#include "../inc/stringOperations.h"
#include <string.h>
#include <ctype.h>
int charCount(char inputString[], char letterToFind) {
    int count = 0;
    int len = strlen(inputString);
    for (int i = 0; i < len; i++) {
        if (tolower(inputString[i]) == tolower(letterToFind)) {
            count++;
        }
    }
    return count;
}

bool containsWord(char inputString[], char wordToFind[]) {
    char inputCopy[64];
    strcpy(inputCopy, inputString); // make a copy of the input string to avoid modifying the original

    char* word = strtok(inputCopy, " ,.-"); // split the string into words on spaces, commas, periods, and hyphens

    while (word != NULL) {
        if (strcasecmp(word, wordToFind) == 0) { // case-insensitive comparison of words
            return true;
        }
        word = strtok(NULL, " ,.-");
    }

    return false;
}




