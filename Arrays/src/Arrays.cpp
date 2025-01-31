/*
 * Arrays!
 */

#include <iostream>
using namespace std;

int main() {

	int values[3];

	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	cout << "Array of Integers" << endl;
	cout << "=================" << endl;
	for (int i = 0; i < 3; i++) {
		cout << values[i] << endl;
	}

	cout << "Bad Idea: " << values[3] << endl;

	double numbers[4] = { 4.5, 2.3, 7.2, 8.1 };

	cout << endl << "Array of Doubles" << endl;
	cout << "================" << endl;
	for (int i = 0; i < 4; i++) {
		numbers[i] = 77;
		cout << numbers[i] << endl;
	}

	cout << endl << "Initializing with zero values" << endl;
	cout << "===============" << endl;

	int numberArray[8] = {};

	cout << endl << "Array of Numbers" << endl;
	cout << "================" << endl;
	for (int i = 0; i < 8; i++) {
		cout << numberArray[i] << endl;
	}

	string texts[] = {"apple", "banana", "orange"};
	for (int i = 0; i < 3; i++) {
		cout << texts[i] << endl;
	}

	return 0;
}
