#include <stdio.h>
#include <string.h>

#include "../inc/studentRecord.h"

int main() {

    struct Student  studentOne;
    float           gpa = 3.57;
    int             term = 2;

    // TODO - Create a pointer to the studentOne variable
    //studentPointer =
    struct Student *studentPointer = &studentOne;

    // TODO - Using the pointer, set the student's properties
    // NOTE - Two of the struct's members are pointers themselves
    strcpy(studentPointer->studentID,"w5555555");
    strcpy(studentPointer->lastName, "Trudeau");
    strcpy(studentPointer->firstName, "Justin");
    studentPointer->gradePointAverage = &gpa;
    studentPointer->term = &term;

    bool isOnTime = false;
    //printf("%s", isOnTime ? "true" : "false");

    // TODO - Output the student's details using the Pointer
    printf("Student One:\n");
    printf("ID: %s NAME: %s, %s\n", studentPointer->studentID, studentPointer->lastName, studentPointer->firstName);
    printf("TERM: %d GPA: %.2f FULL-TIME: %s\n",*studentPointer->term, *studentPointer->gradePointAverage, isOnTime ? "true" : "false");

    // TODO - Uncomment and fix the following code
    int originalVariable;
    int originalVarPointer;

    originalVariable = 10;
    originalVarPointer = originalVariable;
    originalVarPointer = originalVarPointer + 10;

    //printf("\nFirst updated variable value: %i\n", originalVariable);
    printf("\nFirst updated variable value: %i\n", originalVarPointer);
    originalVarPointer+=10;

    //printf("\nSecond updated variable value: %i\n", originalVariable);
    printf("\nSecond updated variable value: %i\n", originalVarPointer);
    return 0;
}


