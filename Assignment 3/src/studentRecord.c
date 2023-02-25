//
// Created by Mohamad Taha on 2023-02-19.
//
#include <stdio.h>
#include "../inc/studentRecord.h"

//This will gather the student id, first name and last name from the user
void populateStudentRecord(struct studentRecord *record){
        printf("Please enter the student ID: ");
        scanf("%d", &record->studentID);
        printf("Please enter the last name for Student #%d:", record->studentID);
        scanf(" %s", record->lastName);
        printf("Please enter the first name for Student #%d:", record->studentID);
        scanf(" %s", record->firstName);

        //Now I will create a for loop to keep prompting the user to enter the names and grades of 5 courses
        for (int i = 0; i < COURSES; i++) {
            printf("Please enter the course name: ");
            scanf(" %s", record->courseRecords[i].courseName);
            printf("Please enter the mark for %s: ", record->courseRecords[i].courseName);
            scanf(" %f", &record->courseRecords[i].mark);//***************************************
        }
}

//This function will print the student input information
void studentReport(struct studentRecord *record) {
    printf("Student: ID:%d         Name: %s, %s\n", record->studentID, record->lastName, record->firstName);
    printf("---------------------------------------------------------------------------\n\n");
    //for loop to print all the courses information 5
    for (int i = 0; i < COURSES; i++) {
        printf("Course name: %s     Course mark: %.0f\n", record->courseRecords[i].courseName,
               record->courseRecords[i].mark);
    }
}

//calculating and printing the average
void printAverage(struct studentRecord *record){
    float total = record->courseRecords[0].mark + record->courseRecords[1].mark + record->courseRecords[2].mark +
    record->courseRecords[3].mark + record->courseRecords[4].mark;
    float average = total/COURSES;
    printf("\n\nGrade Average: %.1f\n",average);
}
