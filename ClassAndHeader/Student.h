

#ifndef STUDENT_H
#define STUDENT_H

class Student {
private: 
    char name[30];
        int rollNo;
        int total;
        float perc;
        
public:
    void getDetails();
    void putDetails();
};

#endif /* STUDENT_H */

