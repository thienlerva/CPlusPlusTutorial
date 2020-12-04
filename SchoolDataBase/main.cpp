#include <iostream>
#include <cstdlib>
#include <vector>
#include "Person.h"
#include "Instructor.h"
#include "Student.h"
#include <string>
#include <fstream>
#include <ostream>
#include <ctype.h>
#include <sstream>

using namespace std;

void writeToDB(string &fileName);
void readDB(string &fileName);
Student getStudentInfo(string &input);

int main(int argc, char** argv) {
    
//    Person person("1", "Thien", "Le");
//    Student student1("3", "Jennifer", "Le", 'A');
//    
//    Person *std1 = &student1;
//    
//    Student student2("4", "Anthony", "Le", 'A');
//    
//    Person *std2 = &student2;
//    vector<Student> students;
//    
//    students.push_back(student1);
//    students.push_back(student2);
//    
//    Instructor instructor("1", "Thien", "Le", "Computer science", students);
//    vector<Student> myStudent = instructor.getStudents();
//    cout << instructor.toString() << endl;
    
    string fileName = "student.txt";
    //writeToDB(fileName);
    readDB(fileName);
    
    return 0;
}

void writeToDB(string &fileName) {
  
      string input;
    
    do {
        string id;
        string firstName;
        string lastName;
        char grade;
        
        try {
        cout << "Enter student ID: ";
        getline(cin, id);
      
        cout<< "Enter firstName: ";
        getline(cin, firstName);
        
        cout << "Enter student last name: ";
        getline(cin, lastName);
        
        cout << "Enter student grade: ";
        cin >> grade;
        cin.ignore();
        
        if (id.length() < 1 || firstName.length() < 2 || lastName.length() < 2 || isblank(grade)) {
            throw 99;
        }
        
        ofstream writer(fileName, ios::app);
    
    if (writer.is_open()) {
        cout << "Successfully open the file: " << fileName << endl;
    } else {
        return;
    }
        
        writer << id << ", " << firstName << ", " << lastName << ", " << grade << endl;
        writer.close();
        
        cout << "Want to continue y or n? ";
        getline(cin,input);
        } catch(int x) {
            cout << "Please enter all values, error: " << x << endl;
        }
                
    } while (input != "n");
        
      
}

void readDB(string &fileName) {
    
    ifstream reader(fileName);
    string line;
    
    if (reader.is_open()) {
        for (int i = 0; !reader.eof(); i++) {
            getline(reader, line);
            Student student = getStudentInfo(line);
            cout <<student.toString() << "\n";
        }
        reader.close();
    }
}

Student getStudentInfo(string &input) {
   
    istringstream ss(input);
    string token;
    string id, firstName, lastName;
    string grade;
    string line[4];
    
    int i = 0;
    while(getline(ss, token, ',')) {
        line[i] = token;
        i++;
    }
    
    grade = line[3];
    
    Student student(line[0], line[1], line[2], grade[1]);
    
    
    return student;
}

