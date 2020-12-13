#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

bool compare(int a, int b) {
    return a < b;
}

bool reverseVector(int a, int b) {
    return a > b;
}

// an interval has a start time and end time
struct Interval {
    int start, end;
};

// Compare two intervals according to starting time
bool compareInterval(Interval i1, Interval i2) {
    return (i1.start < i2.start);
}

struct myStruct {
    bool operator() (int i, int j) {
        return i < j;
    }
} myObj;

struct KeyStruct {
    int key;
    string data;
    
    KeyStruct(int key, string data) {
        this->key = key;
        this->data = data;
    }
};

bool keyStructComparator(KeyStruct &obj1, KeyStruct &obj2) {
    return obj1.key < obj2.key;
}

int main(int argc, char** argv) {

    int arr[] = {5,1,0,4,6,9,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr + size);
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // default greater<>() function
    sort(arr, arr + size, greater<int>());
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    sort(arr, arr + size, compare);
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    Interval iv[] = {{6,8}, {1, 9}, {2, 4}, {4,7}};
    int n = sizeof(iv) / sizeof(iv[0]);
    
    // sort the intervals in increasing order of start time
    sort(iv, iv + n, compareInterval);
    
    cout << "Intervals sorted by start time: \n";
    for (int i = 0; i < n; i++) {
        cout << "[" << iv[i].start << "," << iv[i].end << "]";
    }
    
    cout << endl;
    
    // sorting vector
    vector<int> myVector(arr, arr + size);
    
    sort(myVector.begin(), myVector.end());
    
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector.at(i) << " ";
    }
    cout << endl;
    
    sort(myVector.begin(), myVector.end(), reverseVector);
    
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector.at(i) << " ";
    }
    cout << endl;
    
    // using obj as comp
    sort(myVector.begin(), myVector.end(), myObj);
    
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector.at(i) << " ";
    }
    cout << endl;
    
    vector<KeyStruct> vec;
    vec.push_back(KeyStruct(4, "test"));
    vec.push_back(KeyStruct(2, "is"));
    vec.push_back(KeyStruct(3, "a"));
    vec.push_back(KeyStruct(1, "this"));
    
    // using lambda expression in c++11
//    sort(vec.begin()), vec.end(), [](KeyStruct &obj1, KeyStruct &obj2) {
//        return obj1.key < obj2.key;
//    });
    
    sort(vec.begin(), vec.end(), keyStructComparator);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i).data << ", ";
    }
    
    cout << endl;
    
    
    list<string> names;
    names.push_back("Jennifer");
    names.push_back("Anthony");
    
    names.sort();
    
    for (string n : names) {
        cout << n << endl;
    }
    
    return 0;
}

