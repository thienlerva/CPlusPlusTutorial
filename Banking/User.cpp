#include "User.h"
#include <string>
#include <iostream>

using namespace std;

User::User() {
    cout << "Default constructor\n";
}

User::User(string firstName, string lastName, string DOB,
            int accountNumber, double balance, string password) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->DOB = DOB;
    this->accountNumber = accountNumber;
    this->balance = balance;
    this->password = password;
}

void User::setAll(string firstName, string lastName, string DOB,  double balance, string password) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->DOB = DOB;
    
    this->balance = balance;
    this->password = password;
}

User::~User() {
    cout << "User deconstructor\n";
}

string User::getFirstName() {
    return this->firstName;
}

string User::getLastName() {
    return this->lastName;
}

string User::getDOB() {
    return this->DOB;
}

int User::getAccountNumber() {
    return this->accountNumber;
}

double User::getBalance() {
    return this->balance;
}

string User::getPassword() {
    return this->password;
}

void User::setFirstName(string firstName) {
    this->firstName = firstName;
}

void User::setLastName(string lastName) {
    this->lastName = lastName;
}

void User::setDOB(string DOB) {
    this->DOB = DOB;
}

void User::setAccountNumber(int accountNumber) {
    this->accountNumber = accountNumber;
}

void User::setBalance(double balance) {
    this->balance = balance;
}

void User::setPassword(string password) {
    this->password = password;
}

string User::toString() {
    string result = this->lastName;
    result +=  ", " + this->firstName;
    result +=  ", account number: " + to_string(this->accountNumber);
    result +=  ", has a balance of $" + to_string(this->balance);
    
    return result;
}


