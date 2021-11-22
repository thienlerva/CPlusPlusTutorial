/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: codex
 *
 * Created on November 5, 2021, 10:05 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

typedef int counter; // alias name for counter instead of int
#define LIMIT 5  // const int LIMIT = 5, there is no ; at the end
extern int globalNum = 32; // global variable
int b = 8;

void enterName() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is: " << name << endl;
}

void printNumber(signed int count);  // signed means positive number
void calculator() {
    int x,y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Total of " << x << " + " << y << " : " << x + y << endl;
}

struct Book {
    string title;
    string author;
    int year;
    double price;
};

void getBookInfo(Book *aBook);
void printBookInfo(Book *aBook);

unsigned int factorial(unsigned int n) {
    return n == 0 ? 1 : n * factorial(n - 1);
}

int main(int argc, char** argv) {

    globalNum = 30;
    cout << "The value of modified extern variables globalNum and b: " << globalNum << ", " << b << endl;
    for(int i = 0; i <= LIMIT; i++) {
        cout << i << " ";
    }
    
    char myLetter = 'D';
    bool flag = true;
    string sthString = "Hello";
    const float PI = 3.14;
    
    counter tick_c = 100;
    
    cout <<"Counter: " << tick_c << endl;
    //int x = 5, y = 6, z = 50;
    enum color {red, green, blue} firstColor, secondColor;
    firstColor = green;
    cout <<"Value of firstColor: " << firstColor << endl;
    
    // for loop
    int arr[] = {1, 2, 3, 4, 5};
    
    for(int n : arr) {
        cout << n << endl;
    }
    
//    signed int count;
//    cout << "Enter a high end number: ";
//    cin >> count;
//    printNumber(count);
    
    //calculator();
    
    Book aBook;  // use of struct
    //getBookInfo(&aBook);
    //printBookInfo(&aBook);
    
    int upperNumber;
    cout << "Enter factorial number: ";
    cin >> upperNumber;
    cout << "Factorial of " << upperNumber << " : " << factorial(upperNumber) << endl;
    return 0;
}

void printNumber(signed int count) {
    int i = 1;
    while (count >= i) {
        cout << i ;
        i++;
    }
    cout << endl;
}

void getBookInfo(Book *aBook) {
    cout << "Enter book title: ";
    
    getline(cin, aBook->title);
    
    cout << "Enter author: ";
    getline(cin, aBook->author);
    cout << "Enter published year: ";
    cin >> aBook->year;
    cout << "Enter price: ";
    cin >> aBook->price;
    
}

void printBookInfo(Book *aBook) {
    cout << "Book: " << aBook->title << endl;
    cout << "Author: " << aBook->author << endl;
    cout << "Year: " << aBook->year << endl;
    cout << "Price: $" << aBook->price << endl;
}
