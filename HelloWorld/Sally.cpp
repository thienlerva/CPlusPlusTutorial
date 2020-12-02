#include <iostream>
#include "Sally.h"

using namespace std;

Sally::Sally(int a, int b) 
: regVar(a),  // initialize variable
        constVar(b) 
{
}

Sally::~Sally() {
    cout << "I am being destroyed" << endl;
}

void Sally::printCrap() {
    cout << "Did someone say steak" << endl;
}

void Sally::printShiz() {
    cout << "I am a reguralr function" << endl;
}

void Sally::printShitz2() const {
    cout << "I amd the constant method" << endl;
}

void Sally::print() {
    cout << "regVal: " << this->regVar << " , constVar: " << constVar << endl;
}
