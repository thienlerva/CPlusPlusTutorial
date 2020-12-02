#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

Mother::Mother() {
   cout << "I am the mother constructor!" << endl; 
}

Mother::~Mother() {
   cout << "mother desconstructor!" << endl; 
}

void Mother::sayName() {
    cout << "I am a Roberts" << endl;
}
