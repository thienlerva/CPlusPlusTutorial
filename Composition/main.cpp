

#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Birthday birthObj(12, 28, 1986);
    People people("Bucky the King", birthObj);
    
    people.printInfo();
    
    return 0;
}

