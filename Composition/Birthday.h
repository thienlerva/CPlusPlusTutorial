

#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include <string>
using namespace std;

class Birthday {
public:
    Birthday();
    Birthday(int m, int d, int y);
    void printDate();
private:
    int month;
    int day;
    int year;
};

#endif /* BIRTHDAY_H */

