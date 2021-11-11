#include <math.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int isPrime(int &num);

struct Book {
    string title;
    string author;
    int year;
    double price;
};

void getBookInfo(Book *aBook);
void printBookInfo(Book *aBook);

int main(int argc, char** argv) {

    int number = 4;
    int ans = isPrime(number);
    
    string answer = isPrime(number) ? " is a prime number" : " is not a prime number";
    
    cout << number << answer << endl;
    
    Book aBook;
    getBookInfo(&aBook);
    printBookInfo(&aBook);
  
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

void getBookInfo(Book *aBook) {
    cout << "Enter book title: ";
    
    getline(cin, aBook->title);
    
    cout << "Enter author: ";
    getline(cin, aBook->author);
    cout << "Enter published year: ";
    cin >> aBook->year;
    cout << "Enter price: ";
    cin >> aBook->price;
    
}

void printBookInfo(Book *aBook) {
    cout << "Book: " << aBook->title << endl;
    cout << "Author: " << aBook->author << endl;
    cout << "Year: " << aBook->year << endl;
    cout << "Price: $" << aBook->price << endl;
}

