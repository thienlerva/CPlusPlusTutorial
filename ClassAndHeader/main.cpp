
#include <iostream>
#include "Time.h"
#include "Student.h"
#include "Animal.h"
#include <string>
using namespace std;

#define MAX 10

int main() {

//    Time t1(10, 50, 59);
//    t1.print();
//    
//    Time t2;
//    t2.print();
//    t2.setTime(6, 39, 9);
//    t2.print();
//    
//    if(t1.equals(t2)) {
//        cout << "Two objects are equal\n";
//    } else {
//        cout << "Two objects are not equal\n";
//    }
//    
//    Student student[MAX];  // array of objects creation
//    int n,loop;
//    
//    cout << "Enter total number of students: ";
//    cin >> n;
//    
//    for (loop = 0; loop < n; loop++) {
//        cout << "Enter details of student: " << loop+1 << ":\n";
//        student[loop].getDetails();
//    }
//    
//    cout << endl;
//    for (int i = 0; i < n; i++) {
//        cout << "Details of student " << (i + 1) << ":\n";
//        student[i].putDetails();
//    }
    
    Animal tom (36, 15, "Tom");
    cout << tom.getName() << endl;
    tom.setHeight(90);
    tom.toString();
    
    Animal fred;
    fred.toString();
    cout << "Number of animals: " << Animal::getNumberOfAnimals() << endl;
    
    return 0;
}

