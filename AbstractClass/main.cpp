/*
 * Abstract class, virtual function
 */

#include <cstdlib>
#include <iostream>

using namespace std;

// Abstract base class
class Instrument {
public:
    virtual void MakeSound() = 0;
};

// Inherited classes
class Guitar : public Instrument {
public:
    void MakeSound() {
        cout << "Guitar is playing...\n";
    }
};

class Piano : public Instrument {
public:
    void MakeSound() {
        cout << "Piano is playing...\n";
    }
};

int main(int argc, char** argv) {

    Instrument *i1 = new Guitar();
    //i1->MakeSound();
    
    Instrument *i2 = new Piano(); //Piano i2;
    //i2->MakeSound(); //i2.MakeSound();
    
    Instrument *instruments[2] = {i1, i2};
    for (int i = 0; i < 2; i++) {
        instruments[i]->MakeSound();
    }
    
    return 0;
}

