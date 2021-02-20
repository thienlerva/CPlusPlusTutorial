/* Exception handling */
#include <iostream>

using namespace std;

float division();

int main() {
    
    float total;
    
    total = division();
    cout << total << endl;
    
    return 0;
}

float division() {
    
    float a, b;
    
    try {
    cout << "Enter first number: ";
    cin >> a;
    
    cout << "Enter second number: ";
    cin >> b;
    
    if (b == 0) {
        throw 0;
    }
    
    return a/b;
    
    } catch (...) {
        cout << "You cannot divide by 0" << endl;
    }
}
        

