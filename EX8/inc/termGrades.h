//
// Created by Mohamad Taha on 2023-02-09.
//

#ifndef EX8_TERMGRADES_H
#define EX8_TERMGRADES_H

union Grade {
    char letterGrade[3];
    float gpa;
    int numberGrade;
};

struct Course {
    char courseName[10];
    int gradeCode;
    union Grade finalMark;
};

float calculateTermGPA(int numCourses, struct Course courseList[]);









#endif //EX8_TERMGRADES_H
