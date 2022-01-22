/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Student.h"
#include <string>

using namespace std;

Student::Student(string name, int rollNum) {
    this->name = name;
    this->rollNum = rollNum;
}

string Student::getName() {
    return this->name;
}

int Student::getRollNum() {
    return this->rollNum;
}

