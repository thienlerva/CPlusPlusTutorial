#include <iostream>
#include <cstdlib>

using namespace std;

template <class bucky>

bucky addCrap(bucky &a, bucky &b) {
    return a + b;
}

template <class FIRST, class SECOND>
FIRST smaller(FIRST &a, SECOND &b) {
    return (a < b ? a : b);
}

int main(int argc, char** argv) {

//    double x = 7.65, y=43.09, z;
//    z = addCrap(x,y);
    
    int x = 89;
    double y = 56.78;
    
    cout << smaller(x,y) << endl;
    return 0;
}

