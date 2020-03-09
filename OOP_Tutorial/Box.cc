/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "Shape.h"
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;
  
public:
    Box();
    ~Box();
    Box(double len, double bre, double hei){
        length = len;
        breadth = bre;
        height = hei;
    };
    
    double getVolumn() {
        return length * breadth * height;
    }
    
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

// Member functions definitions

Box::Box() {
    cout << "Object is being created" << endl;
}

Box::~Box() {
    cout << "Object is being deleted" << endl;
}

void Box::setLength(double len) {
    length = len;
}

void Box::setHeight(double hei) {
    height = hei;
}

void Box::setBreadth(double bre) {
    breadth = bre;
}

int main() {
    Box box1(12.0, 10.0, 12.0);
    
    
    cout << "Volume of box1: " << box1.getVolumn() <<endl;
    
    //box2.setLength(12.0);
//    box2.setHeight(10.0);
//    box2.setBreadth(13.0);
//    
//    cout << "Volume of box2: " << box2.getVolumn() << endl;
    
    Shape shape("Square");
    cout << shape.getName() << endl;
}

