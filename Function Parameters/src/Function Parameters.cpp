/*
 * Learnin' about parameters for functions
 */

#include <iostream>
using namespace std;

// This is flawed and doesn't run more than once but who cares.

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl << endl;
}

int getInput() {
	cout << "Enter selection: " << flush;

	int input;
	cin >> input;

	return input;
}

void processSelection(int option) {
	switch (option) {
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing record..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;
	}
}

int main() {

	showMenu();

	int selection = getInput();
	processSelection(selection);

	return 0;
}
