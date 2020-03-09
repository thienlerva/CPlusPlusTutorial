

#include <iostream>
using namespace std;

int main(int argc, char**argv) {
    // Prints welcome message...
    cout << "Welcome ..." << endl;
    printf("Hello");
    // Prints arguments...
    if (argc > 1) {
        cout << endl << "Arguments:" << std::endl;
        for (int i = 1; i < argc; i++) {
            std::cout << i << ": " << argv[i] << std::endl;
        }
    }
    
    return 0;
}
