/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "Shape.h"
using namespace std;

class Shape {
private:
    string name;
    
public:
    Shape(string shapename){
        name = shapename;
    };
    
    string getName() {
        return name;
    }
};

