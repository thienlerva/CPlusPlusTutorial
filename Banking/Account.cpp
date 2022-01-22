#include "Account.h"
#include "User.h"
#include <string>
#include <iostream>

using namespace std;

int Account::accountNumber = 1000;

Account::Account() {
    cout << "Default constructor\n";
}

Account::~Account() {
    //Account::accountNumber = 1000;
    cout << "Account Deconstructor" << endl;
}

Account::Account(User *user) {
    this->user = user;
    accountNumber++; // Account::accountNumber++;
}

void Account::setAccount(User *user) {
    this->user = user;
    accountNumber++;
}

int Account::getAccountNumber() {
        return accountNumber; // Account::accountNumber;
    }

int Account::getNextAccountNumber() {
    return accountNumber++;
}

string Account::toString() {
    string result = user->toString();
    return result;
}


