
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    string numberOfGuessed;
    int intNumberOfGuessed = (rand() % 100) + 100;
    int numOfGuessed;
    cout << intNumberOfGuessed << endl;
    
    do {
        cout << "Guess between 1 and 10 \n";
        getline(cin, numberOfGuessed);
        
        numOfGuessed = stoi(numberOfGuessed);
        cout << numOfGuessed << endl;
    } while (intNumberOfGuessed != numOfGuessed);
    
    cout << "You win" << endl;
    
    return 0;
}

