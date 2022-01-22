

#ifndef USER_H
#define USER_H
#include <list>
#include <string>
using namespace std;

class User {
public:
    User();
    User(string firstName, string lastName, string DOB, 
            int accountNumber, double balance, string password);
    void setAll(string firstName, string lastName, string DOB, double balance, string password);
    ~User();
    string getFirstName();
    string getLastName();
    string getDOB();
    int getAccountNumber();
    double getBalance();
    string getPassword();
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setDOB(string DOB);
    void setAccountNumber(int number);
    void setBalance(double balance);
    void setPassword(string password);

    string toString();
    
private:
    string firstName;
    string lastName;
    string DOB;
    int accountNumber;
    double balance;
    string password;
    
};


#endif /* USER_H */

