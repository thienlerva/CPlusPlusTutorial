
#include <iostream>

using namespace std;

class Animal {
private:
    int height;
    int weight;
    string name;
    static int numberOfAnimals;
    
public:
    Animal (int a, int b, string c);
    Animal ();
    ~Animal();
    
    void setHeight(int cm);
    
    void setWeight(int w);
    
    void setName(string n);
    
    int getHeight();
    
    int getWeight();
    
    string getName();
    
    static int getNumberOfAnimals();
    
    void toString();
};

int Animal::numberOfAnimals = 0;

Animal::Animal(int h, int w, string name) {
    this->height = h;
   this->weight = w;
    this->name = name;
    Animal::numberOfAnimals++;
}

Animal::~Animal() {
    cout << "Animal " << this->name << " destroyed!\n";
}

Animal::Animal() {
    this->name = "None";
    this->height = 0;
    this->weight = 0;
    Animal::numberOfAnimals++;
}

void Animal::setHeight(int cm) {
    this->height = cm;
}

void Animal::setName(string n) {
    this->name = n;
}

void Animal::setWeight(int cm) {
    this->height = cm;
}

string Animal::getName() {
    return this->name;
}

int Animal::getHeight() {
    return this->height;
}

int Animal::getWeight() {
    return this->weight;
}

int Animal::getNumberOfAnimals() {
    return Animal::numberOfAnimals;
    
}
void Animal::toString() {
    cout << this->name << " is " << this->height << " height and " << this->weight << " lbs, has "
            << Animal::numberOfAnimals << "\n";
}

