/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: thienle
 *
 * Created on March 7, 2020, 3:52 PM
 */

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
const string NAME = "Giraffe Academy";

int max(int a, int b);

void min(int a, int b);

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books book);

/*
 * 
 */
int main(int argc, char** argv) {
    
//    string subName = NAME.substr(8);
//    cout << "Hello World" << endl;
//    cout << "My name is: " << subName << endl;
//    cout << sqrt(25) << endl;
//    cout << ceil(4.7) << endl;
//    cout << floor(4.1) << endl;
//    cout << fmax(3,10) << endl;
    
//    int age;
//    cout << "Enter your age: ";
//    cin >> age;
//    cout << "YOur age is: " << age << " years old" << endl;
    
    string color, pluralNoun, celebrity;
//    cout << "Enter a color: ";
//    getline(cin, color);
//    cout << "Enter a plural noun: ";
//    getline(cin, pluralNoun);
//    cout << "Enter a celebrity: ";
//    getline(cin, celebrity);
//    cout << "Roses are " << color << endl;
//    cout << pluralNoun << " are blue" << endl;
//    cout << "I love " << celebrity << endl;
    
    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    
//    for (int i = 0; i < 6; i++) {
//        cout << luckyNums[i] << endl;
//    }
    
    cout << max(5,3) << endl;
    min(5,1);
    
    // Struct
    struct Books book1;
    struct Books book2;
    
    strcpy(book1.title, "Learn C++ Programming");
    strcpy(book1.author, "Chand Miyan");
    strcpy(book1.subject, "C++ Programming");
    book1.book_id = 6495407;
    
    strcpy(book2.title, "Telecom Billing");
    strcpy(book1.author, "Yakit Singha");
    strcpy(book1.subject, "Telecome");
    book1.book_id = 6495700;
    
    // Print Book1 info
//   cout << "Book 1 title : " << book1.title <<endl;
//   cout << "Book 1 author : " << book1.author <<endl;
//   cout << "Book 1 subject : " << book1.subject <<endl;
//   cout << "Book 1 id : " << book1.book_id <<endl;

   // Print Book2 info
//   cout << "Book 2 title : " << book2.title <<endl;
//   cout << "Book 2 author : " << book2.author <<endl;
//   cout << "Book 2 subject : " << book2.subject <<endl;
//   cout << "Book 2 id : " << book2.book_id <<endl;
   
    printBook(book1);
    printBook(book2);
    
    return 0;
}

int max(int num1, int num2) {
    int result;
    
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    
    return result;
}

void min(int a, int b) {
    cout << fmin(a,b);
}


void printBook(struct Books book) {
    cout << "Book title : " << book.title <<endl;
   cout << "Book author : " << book.author <<endl;
   cout << "Book subject : " << book.subject <<endl;
   cout << "Book id : " << book.book_id <<endl;
}
