//============================================================================
// Name        : Integer.cpp
// Author      : Ben Hardin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>
using namespace std;

int main() {

	int value = 54656;
	cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long lValue = 2345325123412341;
	cout << lValue << endl;

	short sValue = 23434;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;

	cout << "Size of long: " << sizeof(long) << endl;

	cout << "Size of short: " << sizeof(short) << endl;

	unsigned int uValue = 23423423;
	cout << "Size of unsigned int: " << sizeof(uValue) << endl;

	return 0;
}
