

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student: public Person {
private:
    char grade;
    
public:
    Student();
    Student(string id, string firstName, string lastName, char grade);
    void setGrade(char grade);
    char getGrade();
    string toString();
};
#endif /* STUDENT_H */
