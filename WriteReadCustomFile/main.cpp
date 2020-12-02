#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void writeFile(string &filename);
void readFile(string &filename);
int getOption();
void displayItems(int &x);

int main(int argc, char** argv) {
    
    string file = "player.txt";
    //writeFile(file);
    //readFile(file);
    
    int option = getOption();
    
    while (option != 4) {
        switch(option) {
            case 1:
                displayItems(option);
                break;
            case 2:
                displayItems(option);
                break;
            case 3:
                displayItems(option);
                break;
        }
        
        option = getOption();
    }
    
    return 0;
}

int getOption() {
    int choice;
    
    cout << "\n1 - just plain items\n";
    cout << "2 - helpful items\n";
    cout << "3 - harmful items\n";
    cout << "4 - quit program\n\n";
    
    cin >> choice;
    return choice;
}

void displayItems(int &x) {
    
    ifstream reader("objects.txt");
    string name;
    double power;
    
    if (x == 1) {
        while (reader >> name >> power) {
            if (power == 0) {
                cout << name << ' ' << power << endl;
            }
        }
    } else if (x == 2) {
        while (reader >> name >> power) {
            if (power > 0) {
                cout << name << ' ' << power << endl;
            }
        }
    } else if (x == 3) {
        while (reader >> name >> power) {
            if (power < 0) {
                cout << name << ' ' << power << endl;
            }
        }
    }
}

void writeFile(string &filename) {
    ofstream writer(filename);
    
    cout << "Enter player ID, Name, and Money\n";
    cout << "Press Ctrl+C to quit\n";
    
    int id;
    string name;
    double money;
    
    while (cin >> id >> name >> money) {
        writer << id << ' ' << name << ' '<< money << endl;
    }
}

void readFile(string &filename) {
    ifstream reader(filename);
    
    int id;
    string name;
    double money;
    
    while (reader >> id >> name >> money) {
        cout << id << ", " << name << ", " << money << endl;
    }
}

