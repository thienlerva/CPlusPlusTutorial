#include <iostream>
#include <cstdlib>
#include "Hannah.h"
#include "Sally.h"
using namespace std;

class StankFist{
public:
    StankFist() {stinkyVar = 0; }
private:
    int stinkyVar;
    
    // function can access the class itself
    friend void stinkysFriend(StankFist &sfo);
};

void stinkysFriend(StankFist &sfo) {
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
}

int main(int argc, char** argv) {

    StankFist bob;
    stinkysFriend(bob);
    
    Hannah ho(23);
    ho.printCrap();
    
    Sally a(34);
    Sally b(21);
    Sally c;
    
    c = a + b;
    cout << c.num << endl;
    return 0;
}

