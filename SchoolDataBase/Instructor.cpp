#include <iostream>
#include <vector>
#include "Person.h"
#include "Instructor.h"

using namespace std;

Instructor::Instructor() {
    
}

Instructor::Instructor(string id, string firstName, string lastName, 
        string department, vector<Student> students): Person(id,firstName, lastName) {
    
    this->department = department;
    this->students = students;
}

void Instructor::setDepartment(string department) {
    this->department = department;
}

string Instructor::getDepartment() {
    return this->department;
}

vector<Student> Instructor::getStudents() {
    return this->students;
}

string Instructor::getStudentList() {
    string line = "";
    
    for (int i = 0; i < this->students.size(); i++) {
        line += this->students.at(i).toString() + ", ";
    }
    return line;
}

string Instructor::toString() {
    string line = Person::toString();
    return line + " " + this->department + ", " + this->getStudentList();
}


