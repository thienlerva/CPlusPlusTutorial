#include <iostream>
#include <cstdlib>

using namespace std;

//template <class T>
//class Bucky {
//    T first, second;
//    public:
//        Bucky(T a, T b) {
//            this->first = a;
//            this->second = b;
//        }
//        
//        T bigger();
//};
//
//template <class T>
//T Bucky<T>::bigger() {
//    return (first > second ? first : second);
//}

template <class T>
class Spunky {
    public:
        Spunky(T x) {
            cout << x << " is not a character" << endl;
        }
};

template<>  // template specification
class Spunky<char>{
    public:
        Spunky(char x) {
            cout << x << " is indeed a character" << endl;
        }
};

int main(int argc, char** argv) {

//    Bucky <int> bo(10, 20);
//    cout << bo.bigger() << endl;
    
    Spunky<int> obj1(7);
    Spunky<double> obj2(3.144);
    Spunky<char> obj3('q');
    return 0;
}

