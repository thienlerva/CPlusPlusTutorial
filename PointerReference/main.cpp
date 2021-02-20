#include <iostream>

using namespace std;

void swap(int &a, int &b);
void getMinMax(int numbers[], int size, int *min, int *max);
void getMinMaxReference(int numbers[], int size, int &min, int &max);
void cipherCode();

int main(int argc, char** argv) {

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
    
    cipherCode();
    
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

