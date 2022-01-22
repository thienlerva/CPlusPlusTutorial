/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.h
 * Author: codex
 *
 * Created on January 21, 2022, 3:32 PM
 */

#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNum;
    
public:
    Student(string name, int rollNum);
    string getName();
    int getRollNum();
};

#endif /* STUDENT_H */

