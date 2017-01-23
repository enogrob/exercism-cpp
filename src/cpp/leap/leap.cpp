//
// Created by Roberto Nogueira on 23/01/17.
//

#include "leap.h"

bool leap::is_leap_year (int year) {
    return ((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0);
}
