

#include <iostream>
#include <fstream>

using namespace std;

int factorial(int n);

int main(int argc, char** argv) {

//    ofstream file;
//    file.open("tuna.txt");
    
    ofstream file("tuna.txt");
    
    file << "I love tuna and tuna loves me!\n";
    file.close();
    
    cout << factorial(5);
    return 0;
}

int factorial(int n) {
    if (n==1) {
        return 1;
    }
    
    return n*factorial(n-1);
}

