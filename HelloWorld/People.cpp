#include "People.h"
#include "Birthday.h"
#include <iostream>
#include <string>

using namespace std;

People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo)
{
    
}

void People::printInfo() {
    cout << this->name << " was born on ";
    dateOfBirth.printDate();
}
