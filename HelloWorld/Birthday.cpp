#include <iostream>
#include "Birthday.h"
using namespace std;

Birthday::Birthday(int d, int m, int y) {
    this->day = d;
    this->month = m;
    this->year = y;
}

void Birthday::printDate() {
    cout << this->month << "/" << this->day << "/" << this->year  << endl;
}