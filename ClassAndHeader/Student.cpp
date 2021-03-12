#include <iostream>

using namespace std;
#define MAX 10

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

void Student::getDetails() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks out of 500: ";
    cin >> total;
    
    perc = (float) total / (500*100);
}

void Student::putDetails() {
    cout << "Student details: \n";
    cout << "Name: "<< name << ",Roll Number: " << rollNo 
            << ", Total: " << total << ", Percentage: " << perc;
    
}
