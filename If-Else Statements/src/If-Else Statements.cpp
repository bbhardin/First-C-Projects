//============================================================================
// Name        : If-Else.cpp
// Author      : Ben Hardin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	/*
	cout << "\n1. Add new record." << endl;
	cout << "2. Delete record." << endl;
	cout << "3. View record." << endl;
	cout << "4. Search record." << endl;
	cout << "5. Quit.\n" << endl;

	cout << "Enter your selection: " << flush;
	int value;
	cin >> value;

	if (value == 1) {
		cout << "Adding new record..." << endl;
	} else if (value == 2) {
		cout << "Deleting record..." << endl;
	} else if (value == 3) {
		cout << "Viewing..." << endl;
	} else if (value == 4) {
		cout << "Searching..." << endl;
	} else if (value == 5) {
		cout << "Quitting..." << endl;
	} else {
		cout << "Invalid option." << endl;
	}
	*/

	float value = 1.1;

	cout << fixed << setprecision(10) << value << endl;

	if(value < 1.11){
		cout << "Equal" << endl;
	} else {
		cout << "Not equal" << endl;
	}


	return 0;
}
