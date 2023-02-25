//
// Created by Mohamad Taha on 2023-02-19.
//

#ifndef ASSIGN3_STUDENTRECORD_H
#define ASSIGN3_STUDENTRECORD_H

#define COURSES 5

//********* ORDER MATTER **********
//Here I declared my first struct for the course record with 2 fields.
struct courseRecord {
    char courseName[21];
    float mark;
};

//Here I declared my second struct for the student record with 5 fields
struct studentRecord {
    int studentID;
    char lastName[21];
    char firstName[21];
    struct courseRecord courseRecords[5];
    float averageMark;
};

//Here I added my function prototype declaration for the records, the report and the average
//This function is to get the inputs from the user
void populateStudentRecord(struct studentRecord *record);

//This function print the students records
void studentReport(struct studentRecord *record);

//This function print the total average
void printAverage(struct studentRecord *record);






















#endif //ASSIGN3_STUDENTRECORD_H
