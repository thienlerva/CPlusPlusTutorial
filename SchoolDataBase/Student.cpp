#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

Student::Student() {}

Student::Student(string id, string firstName, string lastName, 
        char grade): Person(id, firstName, lastName) {
    
    this->grade = grade;
}

void Student::setGrade(char grade) {
    this->grade = grade;
}

char Student::getGrade() {
    return this->grade;
}

string Student::toString() {
    string line = Person::toString();
    return line + " " + this->grade;
}