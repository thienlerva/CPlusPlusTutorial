#include <iostream>
using namespace std;

class X {
public:
	static int i;

	X();
};

//int X::i=1;
X::X() {
	cout <<"Instanticate";
	X::i++;
}

int main() {
	X obj;
	cout << obj.i;
}