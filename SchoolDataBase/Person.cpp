#include <iostream>
#include "Person.h"
#include "Instructor.h"

using namespace std;

Person::Person() {
    
}

Person::Person(string id, string firstName, string lastName) {
    this->id = id;
    this->firstName = firstName;
    this->lastName = lastName;
}

string Person::getFirstName() {
    return this->firstName;
}

string Person::getLastName() {
    return this->lastName;
}

string Person::toString() {
   return this->id + " " + this->firstName + " " + this->lastName;
}
