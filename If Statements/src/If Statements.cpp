//============================================================================
// Name        : If.cpp
// Author      : Ben Hardin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "password";
	cout << "Enter your password: " << flush;

	string input = "";
	cin >> input;

	if(input == password){
		cout << "Your password is correct. You have accessed the database" << endl;
		cout << "--------------------------------------------------------" << endl;
	}
	else {
		cout << "Your password is incorrect." << endl;
	}

	return 0;
}
