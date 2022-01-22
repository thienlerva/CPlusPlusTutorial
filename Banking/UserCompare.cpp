#include "UserCompare.h"
#include <string>
#include <iostream>

bool UserCompare::operator()(User *a, User *b) {
    cout << "Comparing\n";
    return ((a->getFirstName() == b->getFirstName()) && (a->getLastName() == b->getLastName()));
}