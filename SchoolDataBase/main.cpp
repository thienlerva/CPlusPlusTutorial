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
#include <list>

using namespace std;

void writeToDB(string &fileName);
list<Student> readDB(string &fileName);
Student getStudentInfo(string &input);
bool studentNameComparable(Student &s1, Student &s2) {
    return s1.getFirstName() > s2.getFirstName();
}

int main(int argc, char** argv) {
    
    
    string fileName = "student.txt";
    //writeToDB(fileName);
    list<Student> students = readDB(fileName);
    
    for (Student s : students) {
        cout << s.toString() << endl;
    }
    
    students.sort(studentNameComparable);
    
    for (Student s : students) {
        cout << s.toString() << endl;
    }
    
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

list<Student> readDB(string &fileName) {
    
    ifstream reader(fileName);
    string line;
    list<Student> students;
    
    if (reader.is_open()) {
        for (int i = 0; !reader.eof(); i++) {
            getline(reader, line);
            Student student = getStudentInfo(line);
            students.push_back(student);
        }
        reader.close();
    }
    return students;
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

