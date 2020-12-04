
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <string>
#include <vector>
#include "Student.h"
using namespace std;

class Instructor: public Person {
public:
    Instructor();
    Instructor(string id, string firstName, string lastName, string department, vector<Student> students);
    string toString();
    void setDepartment(string department);
    string getDepartment();
    vector<Student> getStudents();
private:
    string department;
    vector<Student> students;
    string getStudentList();
};
#endif /* INSTRUCTOR_H */
