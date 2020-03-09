/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shape.h
 * Author: thienle
 *
 * Created on March 8, 2020, 10:55 PM
 */

#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;

class Shape {
private:
    string name;
    
public:
    Shape(string shapename);
    
    string getName();
};

#endif /* SHAPE_H */

