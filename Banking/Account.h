#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include "Account.h"
#include "User.h"

using namespace std;

class Account {
public:
    Account();
    Account(User *user);
    void setAccount(User *user);
    ~Account();
    static int getAccountNumber();
//    static int getAccountNumber() {
//        return accountNumber;
//    }
    static int getNextAccountNumber();
    string toString();
    
private:
    static int accountNumber;
    User *user;
};


#endif /* ACCOUNT_H */

