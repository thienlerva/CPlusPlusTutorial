#include <iostream>
#include <cstdlib>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle" << endl;
    }
    void hasWheel() {
        cout << "I have four wheels" << endl;
    }
};

class Car: public Vehicle {
    
};

int main(int argc, char** argv) {

    //Mother mom;
    //mom.sayName();
    
//    Car *obj;
//    obj->hasWheel();
    
    Daughter tina;
    //tina.sayName();
    return 0;
}

