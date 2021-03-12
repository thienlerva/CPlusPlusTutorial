#include <iostream>
#include <ostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

void writeToFile(string fileName);
void readFile(string fileName);

int main(int argc, char** argv) {
    string fileName;
   
    cout << "Enter file name: \n";
    getline(cin, fileName);
    
    writeToFile(fileName);
    readFile(fileName);
    
    return 0;
}

void writeToFile(string fileName) {
    
    if (fileName.length() == 0) {
        return;
    }
    
    ofstream file (fileName, ios::app);
    vector<string> names;
    
    if (file.is_open()) {
        cout << "Sucessfully open the file: " << fileName << endl; 
    } else {
        return;
    }
    
    string input;
    
    do {
        cout << "Enter name to the file, q to quit!\n";
        getline(cin, input);
        if (input != "q" && input.length() > 0) {
            names.push_back(input);
        }
    } while (input != "q");
    
    for (string name : names) {
        file << name << endl;
    }
    
    file.close();
}

void readFile(string filename) {
    
    if (filename.length() == 0) {
        cout << "Wrong filename\n";
        return;
    }
    
    vector<string> inputs;
    char letter;
    ifstream reader(filename);
    string line;
    
    if (reader.is_open()) {
        for (int i = 0; !reader.eof(); i++) {
            getline(reader, line);
            inputs.push_back(line);
        }
        cout << endl;
    reader.close();
    
    for (string name : inputs) {
        cout << name << endl;
    }
    
    } else {
        cout << "Error opening file: " << filename << endl;
        return;
    }
}

