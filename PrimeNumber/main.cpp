#include <math.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int isPrime(int &num);
int main(int argc, char** argv) {

    int number = 4;
    int ans = isPrime(number);
    
    string answer = isPrime(number) ? " is a prime number" : " is not a prime number";
    
    cout << number << answer << endl;
  
    return 0;
}

int isPrime(int &num) {
    int sqrtNum = (int) sqrt(num) + 1;
    
    for (int i = 2; i < sqrtNum; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

