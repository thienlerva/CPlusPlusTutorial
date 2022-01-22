/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: codex
 *
 * Created on January 13, 2022, 10:48 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;

void bubbleSort(int *A, int size);
void swap(int *a, int *b);
void print(const char *C);
string reverseString(string str);

/*
 * 
 */
int main(int argc, char** argv) {

    int a = 10, b = 20;
    
    int A[] = {5,2,8,1,10,4};
    for (int i = 0; i < 6; i++) {
        cout << *(A + i) << " ,";
    }
    cout << endl;
    
    int size = sizeof(A) / sizeof(A[0]);
    bubbleSort(A, size);
    
    for (int i = 0; i < size; i++) {
        cout << *(A + i) << " ,";
    }
    cout << endl;
    
    string fish = "Salmon";
    string *fishPtr = &fish;
    cout << "Address: " << fishPtr << " , value: " << *fishPtr << endl;
    
    char C[] = "Hello";
    printf("%s\n", C);
    char *cPrt;
    cPrt = C;
    cPrt++;
    cPrt += 2;
    printf("%c\n", *(cPrt));
    printf("%c\n", *(C + 4));
//    print(C);
    int i = 0;
//    while ( C[i] != '\0') {
//        printf("%c", C[i]);
//        i++;
//    }
    
    char *C1 = C;
    while(*C1 != '\0') {
        printf("%c", *C1);
        C1++;
    }
    printf("\n");
    
    int charSize = sizeof(C) / sizeof(C[0]);
    cout << "Size: " << charSize << endl;
    //char reverse = reverseString(C, charSize -1);
    
    string text = "Hello";
    cout << text[0] << endl;
    
    cout << "Enter a string: ";
    getline(cin, text);
    cout << "Reversed string: " << reverseString(text) << endl;
    return 0;
}

void bubbleSort(int *A, int size) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {  // size - 1 takes more comparison than size - i - 1
            count++;
            if(A[j] > A[j + 1]) {
                /* int temp = A[j];
                *  A[j] = A[j - 1];
                * A[j - 1] = temp;
                */
                swap(A[j], A[j + 1]);
            }
        }
    }
    
    cout << "Count: " << count << endl;
}

void swap(int *a, int *b) {  // a= 10, b = 20
    *a = *a + *b;  // *a = 30
    *b = *a - *b;  // b = 10;
    *a = *a - *b;
}

void print(const char *C) {
    while (*C != '\0') {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

string reverseString(string str) {
    string reversedStr;
    
    for (int i = str.length(); i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

