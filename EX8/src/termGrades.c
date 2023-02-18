//
// Created by Mohamad Taha on 2023-02-09.
//

#include "../inc/termGrades.h"
#include <string.h>
#include <ctype.h>

////////////////////////////////////////////////////
float calculateTermGPA(int numCourses, struct Course courseList[]) {
    int i;
    float totalGPA = 0;
    int totalCourses = 0;

    for (i = 0; i < numCourses; i++) {
        switch (courseList[i].gradeCode) {
            case 0:  // letter grades
                if (strcmp(courseList[i].finalMark.letterGrade, "A") == 0 ||
                    strcmp(courseList[i].finalMark.letterGrade, "A+") == 0) {
                    totalGPA += 4.0;
                } else if (strcmp(courseList[i].finalMark.letterGrade, "A-") == 0) {
                    totalGPA += 3.7;
                } else if (strcmp(courseList[i].finalMark.letterGrade, "B+") == 0) {
                    totalGPA += 3.3;
                } else if (strcmp(courseList[i].finalMark.letterGrade, "B") == 0) {
                    totalGPA += 3.0;
                } else if (strcmp(courseList[i].finalMark.letterGrade, "B-") == 0) {
                    totalGPA += 2.7;
                } else if (strcmp(courseList[i].finalMark.letterGrade, "C+") == 0) {
                    totalGPA += 2.3;
                } else if (strcmp(courseList[i].finalMark.letterGrade, "C") == 0) {
                    totalGPA += 2.0;
                } else if (strcmp(courseList[i].finalMark.letterGrade, "C-") == 0) {
                    totalGPA += 1.7;
                }
                totalCourses++;
                break;
            case 1:  // GPAs
                totalGPA += courseList[i].finalMark.gpa;
                totalCourses++;
                break;
            case 2:  // numeric grades
                if (courseList[i].finalMark.numberGrade >= 80) {
                    totalGPA += 4.0;
                } else if (courseList[i].finalMark.numberGrade >= 75) {
                    totalGPA += 3.7;
                } else if (courseList[i].finalMark.numberGrade >= 70) {
                    totalGPA += 3.3;
                } else if (courseList[i].finalMark.numberGrade >= 65) {
                    totalGPA += 3.0;
                } else if (courseList[i].finalMark.numberGrade >= 60) {
                    totalGPA += 2.7;
                } else if (courseList[i].finalMark.numberGrade >= 55) {
                    totalGPA += 2.3;
                } else if (courseList[i].finalMark.numberGrade >= 50) {
                    totalGPA += 2.0;
                } else if (courseList[i].finalMark.numberGrade >= 47) {
                    totalGPA += 1.7;
                }
                totalCourses++;
                break;
            default:
                // Handle any other grade code here
                break;
        }
    }
    if (totalCourses != 0) {
        return totalGPA / (float) totalCourses;
    } else {
        return 0;
    }
}



