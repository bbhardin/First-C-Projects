//============================================================================
// Name        : Data.cpp
// Author      : Ben Hardin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"

int main() {

	std::cout << "Starting program..." << std::endl;

	{
		Cat cat1;
		cat1.speak();
	}

	std::cout << "Ending program..." << std::endl;

	return 0;
}
