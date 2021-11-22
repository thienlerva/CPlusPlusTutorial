

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

using namespace std;

class Animal {
private:
    string name;
    double height;
    double weight;
    
    static int numOfAnimals;
    
public:
    string GetName() {
        return name;
    }
    
    void SetName(string name) {
        this->name = name;
    }
    
    double GetHeight() {
        return height;
    }
    
    void SetHeight(double height) {
        this->height = height;
    }
    
    double GetWeight() {
        return height;
    }
    
    void SetWeight(double weight) {
        this->weight = weight;
    }
    
    void SetAll(string, double, double);
    
    // Constructors
    Animal();
    Animal(string, double, double);
    // Deconstructor
    ~Animal();
    
    static int GetNumOfAnimals() {
        return numOfAnimals;
    }
    
    void ToString();
};

// Class member implementation
int Animal::numOfAnimals = 0;  // Refer to class fields and methods with ::
// specially static method and static fields Class::Method = Math.squrt()

void Animal::SetAll(string name, double height, double weight) {
    this->name = name;
    this->weight = weight;
    this->height = height;
    Animal::numOfAnimals++;
}

Animal::Animal(string name, double height, double weight) {
    this->name = name;
    this->weight = weight;
    this->height = height;
    Animal::numOfAnimals++;
}

// Default constructor
Animal::Animal() {
    this->name = "";
    this->weight = 0;
    this->height = 0;
    Animal::numOfAnimals++;
}

Animal::~Animal() {
    cout << "Animal " << this->name << " destroyed\n";
}

void Animal::ToString() {
    cout << this->name << " is " << this->height 
            << " cms tall and " << this->weight << " kgs in weight\n";
}

// inherited Dog class
class Dog:public Animal {
private:
    string sound = "Woof";
    
public:
    void MakeSound() {
        cout << "The dog " << this->GetName() << " says " <<  // could use Animal::GetName()
                this->sound << "\n";
    }
    
    // Constructor
    Dog(string, double, double, string);
    Dog():Animal(){}; // Default constructor
    void ToString();
    
};

// override constructor : Animal(,,)
// Calls the superclass constructor to handle initalization
Dog::Dog(string name, double height, double weight, string sound) : Animal(name, height, weight) {  
    this->sound = sound;
}

void Dog::ToString() {
    cout << this->GetName() << " is " << this->GetHeight() 
            << " cms tall and " << this->GetWeight() << " kgs in weight and says " 
            << this->sound << "\n";
}

int main(int argc, char** argv) {

    Animal fred;
    fred.ToString();
    
    Animal tom("Tom", 36, 15); // Animal tom = Animal("Tom",);
    tom.ToString();
    
    Dog spot = Dog("Spot", 36, 20, "Woooof");
    Animal *a = &spot;  // Animal *a = new Dog("Spot", 36, 20, "Woooof");
    a->ToString();
    
    cout << "Number of Animals " << Animal::GetNumOfAnimals() << "\n";
    return 0;
}

