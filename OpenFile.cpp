#include <fstream>
#include <iostream>

using namespace std;

int main() {
	char data[100];

	// Open a file in write mode
	ofstream outfile;
	outfile.open("afile.dat");

	cout << "Writing to the file" << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);

	// write input data into the file
	outfile << data << endl;

	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();

	// write to file
	outfile << data << endl;

	// close the file
	outfile.close();

	// Open a file in read mode
	ifstream infile;
	infile.open("afile.dat");

	cout << "Reading from the file\n";
	infile >> data;

	// Write the data to the screen
	cout << data << endl;

	// read the data from the file and display it
	infile >> data;
	cout << data << endl;

	// close the opened file
	infile.close();

	return 0;
}