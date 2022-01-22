/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: codex
 *
 * Created on January 18, 2022, 10:17 AM
 */

#include <cstdlib>
#include <string>
#include "Account.h"
#include "User.h"
#include "UserCompare.h"
#include <iostream>
#include <sstream>
#include <list>

using namespace std;

list<User> users;
void mainMenu();
void subMenu();
void mainOption(int num);
void subOption(int num);
void createNewAccount();
void login();
bool allowLogin(User *oneUser);
void printAccounts();
void deposit(User *currentUser);
void withdraw(User *currentUser);
void checkBalance(User *currentUser);
void changePassword(User *currentUser);
void logout(User *currrentUser);
void updateUserBalance(User *currentUser, double amount);

int main(int argc, char** argv) {

//    User *aUser = new User("Thien", "Le", "fdf", 134, 13.25);
//    cout << aUser->toString();

//    for (int i = 0; i < 5; i++) {
//        cout << "Account number: " << Account::getNextAccountNumber() << endl;
//    }
    
    User *firstUser = new User();
    firstUser->setFirstName("Thien");
    firstUser->setLastName("Le");
    firstUser->setDOB("01/22/1981");
    firstUser->setPassword("abc");
    firstUser->setBalance(100.99);
    
    Account *firstAccount = new Account(firstUser);
    firstUser->setAccountNumber(Account::getNextAccountNumber());
    
    //list<User> users;
    users.push_back(*firstUser);
 
//    for ( User u : users) {
//        User newUser = users.front();
//        users.pop_front();
//        newUser.setBalance(999.99);
//        users.push_front(newUser);
//        cout << newUser.toString() << endl;
//    }
//    for(User u : users) {
//        cout << u.toString() << endl;
//    }
    
//    for (auto u = users.begin(); u != users.end(); u++) {
//        cout << (*u).toString() << endl;
//    }
    
    
    int optionNumber = 0;
    
    do {
        mainOption(optionNumber);
        mainMenu();
        cin >> optionNumber;
    } while (optionNumber != 4);
    
    
    return 0;
}

void mainMenu() {
    cout << "Welcome to Richmond Bank, select the following option\n";
    cout << "            ----------------------\n";
    cout << "1 - Create a new bank account\n";
    cout << "2 - Log in\n";
    cout << "3 - View All Accounts\n";
    cout << "4 - to quit\n";
    
}

void subMenu(User *currentUser) {
    cout << "Welcome " << currentUser->getFirstName() << endl;
    cout << "   ----------------\n";
    cout << "Your current balance: $" << currentUser->getBalance() << endl;
    cout << "1 - Make deposit\n";
    cout << "2 - Withdraw\n";
    cout << "3 - Check Balance\n";
    cout << "4 - Change Password\n";
    cout << "5 - Log out\n";
    cout << "6 - Main Menu\n";
    cout << "7 - End transaction\n";
}

void mainOption(int num) {
    switch(num) {
        case 1:
            createNewAccount();
            break;
        case 2:
            login();
            break;
        case 3:
            printAccounts();
            break;
        case 4:
            exit(1);
        default:
            cout << "MainOptoin - Invalid option\n";
    }
}

void subOption(int num, User *currentUser) {
    switch(num) {
        case 1:
            deposit(currentUser);
            break;
        case 2:
            withdraw(currentUser);
            break;
        case 3:
            checkBalance(currentUser);
            break;
        case 4:
            changePassword(currentUser);
            break;
        case 5:
            logout(currentUser);
            break;
        case 6:
            //logout(currentUser);
            break;
        case 7:
            exit(1);
        default:
            cout << "SubOption - invalid option\n";
            
    }
}

void createNewAccount() {
    
     User *aUser = new User();
     Account *anAccount = new Account();
     
    cout << "Enter your first name: ";
    string firstName;
    cin >> firstName;
    
    cout << "Enter your last name: ";
    string lastName;
    cin >> lastName;
    
    cout << "Enter your DOB: ";
    string DOB;
    cin >> DOB;
    
    cout << "Enter your balance: ";
    double balance;
    cin >> balance;
    
    cout << "Enter your password: ";
    string password;
    cin >> password;
    
    aUser->setAll(firstName, lastName, DOB, balance, password);
    
    anAccount->setAccount(aUser);
    aUser->setAccountNumber(Account::getAccountNumber());
    
    users.push_back(*aUser);
}

void login() {
    User *aUser = new User();
    if(allowLogin(aUser)) {
        
        int option = 0;
        do {
            subOption(option, aUser);
            subMenu(aUser);
            cin >> option;
           
        } while(option != 6);
    } else {
        cout << "Wrong username\n";
    }
}

bool allowLogin(User *oneUser) {
    cout << "Please enter first name: ";
    string firstName;
    cin >> firstName;
    
    cout << "Please enter last name: ";
    string lastName;
    cin >> lastName;
    
    cout << "Enter password: ";
    string password;
    cin >> password;
    
    string username = firstName + lastName;
    
    for(User u : users) {
        string fName, lName, pWord;
        fName = u.getFirstName();
        lName = u.getLastName();
        pWord = u.getPassword();
        
        if((firstName.find(fName) != string::npos) && (lastName.find(lName) != string::npos) &&
                (password.find(pWord) != string::npos)) {
            cout << "There is a match\n";
            oneUser->setAccountNumber(u.getAccountNumber());
            oneUser->setAll(firstName, lastName, u.getDOB(), u.getBalance(), password);
            return true;
        }
    }
    return false;
}

void printAccounts() {
    for(User u : users) {
        cout << u.toString() << endl;
    }
}

void deposit(User *currentUser) {
    double amount;
    cout << "Enter deposit amount: " << endl;
    cin >> amount;
    double currentBalance = currentUser->getBalance();
    currentUser->setBalance(currentBalance + amount);
    cout << "You just deposited: $" << amount << endl;
    cout << "Your balance is now: $" << currentUser->getBalance() << endl;
    //updateUserBalance(currentUser, currentUser->getBalance());
}

void withdraw(User *currentUser){
    double amount;
    cout << "Enter withdrawal amount: " << endl;
    cin >> amount;
    double currentBalance = currentUser->getBalance();
    currentUser->setBalance(currentBalance - amount);
    cout << "You just withdrew: $" << amount << endl;
    cout << "Your balance is now: $" << currentUser->getBalance() << endl;
}

void checkBalance(User *currentUser) {
    cout << "Your balance is: $" << currentUser->getBalance() << endl;
}

void changePassword(User *currentUser) {
    string newPassword;
    cout << "Enter new password: " << endl;
    cin >> newPassword;
    currentUser->setPassword(newPassword);
    cout << "Your password has been updated!\n";
}

void logout(User *currrentUser) {
    
   int optionNumber = 0;
    
    do {
        mainOption(optionNumber);
        mainMenu();
        cin >> optionNumber;
    } while (optionNumber != 4);
}

void updateUserBalance(User *currentUser, double amount) {
    UserCompare cmp;
    for (auto u = users.begin(); u != users.end(); u++) {
        cout << (*u).toString() << endl;
        User oldUser = *u;
        
        if(cmp(currentUser, &oldUser)) {
            cout << "Equal ojects\n";
            users.pop_front();
            currentUser->setBalance(amount);
            users.push_front(*currentUser);
        }
    }
    
        
//    for ( User u : users) {
//        User oldUser = users.front();
//        User *userPtr = &oldUser;
//        if(cmp(currentUser, userPtr)) {
//            cout << "equal object\n";
//            //users.pop(oldUser);
//            userPtr->setBalance(amount);
//            users.push_front(oldUser);
//            cout << oldUser.toString() << endl;
//        }
//    }
}
