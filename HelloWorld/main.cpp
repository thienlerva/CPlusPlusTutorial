
#include <iostream>
#include <cstdlib>
#include <math.h>
#include "Sally.h"
#include "Birthday.h"
#include "People.h"

using namespace std;

int total(int a, int &b);
int main() {
    int num1 = 10;
    int num2 = 20;
    int sum = total(num1, num2);
//    double x = sqrt(5);
//    cout << "Square root of 4: "<< sqrt(4) << endl;
//      cout << "Power of 2: " << pow(4, 2) << endl;
//      cout << "Floor of 5.12: " << floor(5.12) << endl;
//      cout << "Ceil of 5.72: " << ceil(5.72) << endl;
//    cout << sum << endl;
//    cout << "Num1: " << num1 << " ,num2: " << num2 << endl;
//    
//    string fish = "Tuna";
//    string *fishPointer;
//    fishPointer = &fish;
//    cout << "Address of fish var: " << &fish<< endl;
//    cout << "Same abover: " << fishPointer << endl;
//    cout << "Value point to fish: " << *fishPointer << endl;
//    *fishPointer = "Crook";
//    cout << "Value point to fish: " << *fishPointer << endl;
//    
//    int c;
//    cout << "Size of an integer: " << sizeof(c)  << endl;
//    
//    int bucky[5];
//    int *bp0 = &bucky[0];
//    int *bp1 = &bucky[1];
//    int *bp2 = &bucky[2];
//    cout << "bp0 is at: " << bp0 << endl;
//    cout << "bp1 is at: " << bp1 << endl;
//    cout << "bp2 is at: " << bp2 << endl;
//    
//    bp0 += 2;
//    cout << "bp0 is now at: " << bp0 << endl;
//    bp0++;
//    cout << "bp0 is now at: " << bp0 << endl;
//    
//    cout << "Size of array: " << sizeof(bucky) << endl;
//    
//    int size = sizeof(bucky) / sizeof(bucky[0]);
//    cout << "Size of array: " << size << endl;
    
//    Sally sally;
//    Sally *sallyPtr = &sally;
//    sally.printCrap();  // dot for object
//    sallyPtr->printCrap();  // arrow for pointer
//    
//    Sally so;
//    cout << "omg wtf is this on my machine"  << endl;
//    
//    Sally constObj;
//    constObj.printShitz2();
    
    Sally initObj(5, 20);
    initObj.print();
    
    Birthday dayOfBirth(1,12,1981);
    People robert("Robert", dayOfBirth);
    robert.printInfo();
    
    return 0;
}

int total(int a, int &b) {
    a = 100;
    b = 200;
    return a + b;
}

