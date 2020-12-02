#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

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
    
    return 0;
}

