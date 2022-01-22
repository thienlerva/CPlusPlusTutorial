/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: codex
 *
 * Created on January 21, 2022, 3:32 PM
 */

#include <cstdlib>
#include "Student.h"
#include <string>
#include <list>
#include <iostream>

using namespace std;

class StudentCompare {
public:
    bool operator()(Student &a, Student &b) {
        return a.getRollNum() > b.getRollNum();
    }
};

bool studentNameComparable(Student &s1, Student &s2) {
    return s1.getName() > s2.getName();
}

int main(int argc, char** argv) {

    Student *s1 = new Student("Tim", 20);
    Student *s2 = new Student("Vy", 23);
    Student *s3 = new Student("An", 21);
    
    list<Student> students;
    students.push_back(*s1);
    students.push_back(*s2);
    students.push_back(*s3);
    
    StudentCompare cmp;
    
    //students.sort(cmp);
    students.sort(studentNameComparable);
    
    for(auto stu : students) {
        cout << stu.getName() << endl;
    }
    return 0;
}

