#include <iostream>

using namespace std;

void swap(int &a, int &b);
void getMinMax(int numbers[], int size, int *min, int *max);
void getMinMaxReference(int numbers[], int size, int &min, int &max);
void cipherCode();

void passByVal(int val);
void passByRef(int &ref);
void passByPrt(int *prt);
void swapByRef(int &a, int &b);
void swapByPrt(int *a, int *b);
int addNumber(int &a, int &b);

int main(int argc, char** argv) {
    
    //    string fish = "Tuna";
//    string *fishPointer;
//    fishPointer = &fish;
//    cout << "Address of fish var: " << &fish<< endl;
//    cout << "Same abover: " << fishPointer << endl;
//    cout << "Value point to fish: " << *fishPointer << endl;
//    *fishPointer = "Crook";
//    cout << "Value point to fish: " << *fishPointer << endl;
//    
//    int c;
//    cout << "Size of an integer: " << sizeof(c)  << endl;
//    
//    int bucky[5];
//    int *bp0 = &bucky[0];
//    int *bp1 = &bucky[1];
//    int *bp2 = &bucky[2];
//    cout << "bp0 is at: " << bp0 << endl;
//    cout << "bp1 is at: " << bp1 << endl;
//    cout << "bp2 is at: " << bp2 << endl;
//    
//    bp0 += 2;
//    cout << "bp0 is now at: " << bp0 << endl;
//    bp0++;
//    cout << "bp0 is now at: " << bp0 << endl;
//    
//    cout << "Size of array: " << sizeof(bucky) << endl;
//    
//    int size = sizeof(bucky) / sizeof(bucky[0]);
//    cout << "Size of array: " << size << endl;
    
    //    Sally sally;
//    Sally *sallyPtr = &sally;
//    sally.printCrap();  // dot for object
//    sallyPtr->printCrap();  // arrow for pointer

//    int a,b;
//    cout << "Enter first number: ";
//    cin >> a;
//    cout << "Enter second number: ";
//    cin >> b ;
//    swap(a,b);
//    cout << a << ", " << b << endl;
    
    int numbers[5] = {5, 4, -2, 29, 6};
    int min = numbers[0];
    int max = numbers[0];
    int size = sizeof(numbers) / sizeof(numbers[0]);
    //getMinMax(numbers, size, &min, &max);
    getMinMaxReference(numbers, size, min, max);
//    cout << "Min: " << min << endl;
//    cout << "Max: " << max << endl;
    
    //cipherCode();
    
    int x = 5;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    int *xPrt = &x;
    cout << "Value of *xPrt: " << *xPrt << endl;
    cout << "Address of *xPrt: " << xPrt << endl;
    
    passByVal(x);
    cout << "Value of x: " << x << endl;
    
    passByRef(x);
    cout << "Value of x: " << x << endl;
    
    passByPrt(&x);
    cout << "Value of x: " << x << endl;
    
    int num1 = 123;
    int num2 = 321;
    
    swapByRef(num1, num2);
    cout << "After swapping by reference, num1: " << num1 << ", num2: " << num2 << endl;
    
    swapByPrt(&num1, &num2);
    cout << "After swapping by pointer, num1: " << num1 << ", num2: " << num2 << endl;
    
    int i1 = 2;
    int i2 = 3;
    cout << "Before passing by reference, i1: " << i1 << ", i2: " << i2 << endl;
    
    int total = addNumber(i1, i2);
    cout << "After passing by reference, i1: " << i1 << ", b: " << i2 << endl;
    cout << "Total: " << total << endl;
    
    return 0;
}

void swap(int &a, int &b) {
    // a = 10, b = 20;
    a = a + b; // 30
    b = a - b; // 10
    a = a - b; // 20
}

void getMinMax(int numbers[], int size, int *min, int *max) {
    
    //int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << size << endl;
    
    for(int i = 1; i < size; i++) {
        if (numbers[i] < *min) {
            *min = numbers[i];
        }
        
        if (numbers[i] > *max) {
            *max = numbers[i];
        }
    }
}

void getMinMaxReference(int numbers[], int size, int &min, int &max) {
    
    for(int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
}

void cipherCode() {
    char a,q;
    
    do {
        cout << "Please enter a char to convert, 0 to quit: ";
        cin >> a;
        cout << int (a) << endl;
    } while (a != '0');
}

// similar to Java when passing primitive type
void passByVal(int val) {
     val = 10;
    cout << "Value of val: " << val << endl;
}

// & means passing memory address, will change original variable's value, similar to Java when passing object
void passByRef(int &ref) {
    ref = 20;
    cout << "Address of ref: " << &ref << endl;
    cout << "Value of ref: " << ref << endl;
}

void passByPrt(int *prt) {
    *prt = 30;
    cout << "Value of *prt: " << *prt << endl;
}

void swapByRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByPrt(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int addNumber(int &a, int &b) {
    a = a*10;
    b = b*10;
    cout << "Value of a: " << a << ", b: " << b << endl;
    return a + b;
    
}

