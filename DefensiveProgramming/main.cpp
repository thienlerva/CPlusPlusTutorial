/* assert example */
#include <iostream>
#include <assert.h>
#include <fstream>

using namespace std;

// function prototypes
void printNumber(int *myInt);
void readFile();

int main() {

    int a = 10;
    int *b = NULL;
    int *c = NULL;
    
    b = &a;
    cout << "b: " << *b << endl;
    a = 5;
    *b = 7;
    cout << "a: " << a << endl;
    cout << "b: " << *b << endl;
    
    //printNumber(c);
    printNumber(b);
    readFile();
    
    return 0;
}

void printNumber(int *myInt) {
    
    // use assert to make sure value is not null
    assert(myInt != NULL);
    printf ("%d\n", *myInt);
}

void readFile() {
    
    long start, end;
    ifstream myFile("test.txt", ios::in | ios::binary);
    
    // use assert to ensure file is not null
    assert(myFile != NULL);
    
    start = myFile.tellg();
    myFile.seekg(0, ios::end);
    end = myFile.tellg();
    myFile.close();
    cout << "size of test.txt ";
    cout << " is " << (end - start) << " bytes.\n";
    return;
}

