#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
    public:
        Person();
        Person(string id, string firstName, string lastName);
        virtual string getFirstName();
        virtual string getLastName();
        virtual string toString();
        
    private:
        string id;
        string firstName;
        string lastName;
};

#endif /* PERSON_H */
