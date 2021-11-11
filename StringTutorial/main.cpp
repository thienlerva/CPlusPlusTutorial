#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void readFile(const char *fileName);

int main(int argc, char** argv) {

    string x;
//    getline(cin, x);
//    cout << x << endl;
    
    string s1("hampster ");
    string s2;
    string s3;
    
    s2 = s1;
    s3.assign(s1); // copy string
    cout << s1 << s2 << s3 << endl;
    
    string s4 = "omqwtfbbq";
    cout << s4.at(3) << endl;
    
//    for (int x = 0; x <s4.length(); x++) {
//        cout << s4.at(x);
//    }
    
    string s5("OMG i think i am preggy!!");
    cout << s5.substr(17, 7) << endl;
    
    string one("apples ");
    string two("beans ");
    
    one.swap(two);
    cout << one << two << endl;
    
    string s6("ham is spam oh yes i am!");
    cout << s6.find("am") << endl;
    cout << s6.rfind("am") << endl;
    
    string s7("Hi my name is bucky and i love ham");
    s7.erase(20);
    cout << s7 << endl;
    
    s7.replace(14, 5, "samuel jackson");
    cout << s7 << endl;
    
    s7.insert(14, "lucky ");
    cout << s7 << endl;
    
    string str("Please split this sentence into tokens");
    
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    
    // cstr now contains a c-string copy of str
    char *p = strtok(cstr, " ");
    
    while(p!=0) {
        cout << p << '\n';
        p = strtok(NULL, " ");
    }
    
    delete[] cstr;
    
    string testStr = "Hello world";
    char *test = const_cast<char*>(testStr.c_str());
    printf("%s\n", test);
    
    string fileName = "data.txt";
    
    FILE *fp = fopen(fileName.c_str(), "w+");
    char data[] = "Writing file with FSeek";
    fwrite(data, 1, sizeof(data), fp);
    fclose(fp);
    
    readFile(fileName.c_str());
    
    return 0;
}

void readFile(const char *fileName) {
    FILE *fp;
    char ch;
    fp = fopen(fileName, "r");
    
    if (!fp) {
        printf("File does not exist\n");
        return;
    }
    
    while(1) {
        ch = fgetc(fp);
        if (ch == EOF) {
            break;
        }
        printf("%c", ch);
        
    }
    
    fclose(fp);
}

