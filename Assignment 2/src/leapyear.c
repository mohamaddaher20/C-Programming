//
// Created by Mohamad Taha on 2023-02-04.
//

#include <stdbool.h>
#include "../inc/leapyear.h"

bool leapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
