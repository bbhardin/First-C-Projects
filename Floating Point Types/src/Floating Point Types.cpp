//============================================================================
// Name        : Floating.cpp
// Author      : Ben Hardin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float fValue = 123.456789;
	cout << "Size of fValue: " << sizeof(fValue) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fValue << endl;

	double dValue = 123.456789;
	cout << "Size of dValue: " << sizeof(dValue) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << setprecision(20) << fixed << dValue << endl;

	long double ldValue = 123.45678987654321;
	cout << "Size of ldValue: " << sizeof(ldValue) << endl;
	cout << "Size of long double: " << sizeof(long double) << endl;
	cout << setprecision(20) << fixed << ldValue << endl;

	return 0;
}
