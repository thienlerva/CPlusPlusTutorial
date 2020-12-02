#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

//    try {
//        int momsAge = 50;
//        int sonsAge = 34;
//        
//        if (sonsAge > momsAge) {
//            throw 99;
//        }
//    } catch(int x) {
//        cout << "SOn cannot be older than mom, error: " << x << endl;
//    }
    
    try {
        int num1;
        cout << "Enter first number: " << endl;
        cin >> num1;
        
         int num2;
        cout << "Enter second number: " << endl;
        cin >> num2;
        
        if (num2 == 0) {
            throw 0;
        }
        
        cout << num1/num2 << endl;
        
    } catch(...) {
        cout << "You cant divide by 0" << endl;
    }
   
}

