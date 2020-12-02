/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: thienle
 *
 * Created on May 4, 2020, 2:26 PM
 */

#include <iostream>
#include <stdio.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    printf("Enter a number: \n");
    printf("Number: ");
    int n;
    cin >> n;
    
    int factorial = 1;
    
    for (int i = 1; i < n; i++) {
        factorial += factorial * 1;
    }
    
    cout << n << "! is: " << factorial << ".\n";
    return 0;
}

