#include <stdio.h>

#include "../inc/studentRecord.h"

int main() {

    setbuf(stdout,0);

    //create struct in main and pass them to function as pointer.
    struct studentRecord studentOne;
    struct studentRecord studentTwo;
    struct studentRecord studentThree;

    //call the function three times passing pointers to each student
    populateStudentRecord(&studentOne);
    populateStudentRecord(&studentTwo);
    populateStudentRecord(&studentThree);

    printf("\n*****************************REPORT CARDS****************************\n\n\n");

    //calling the functions
    studentReport(&studentOne);
    printAverage(&studentOne);

    studentReport(&studentTwo);
    printAverage(&studentTwo);

    studentReport(&studentThree);
    printAverage(&studentThree);

    return 0;
}
