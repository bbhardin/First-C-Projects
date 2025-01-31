//============================================================================
// Name        : Variables.cpp
// Author      : Ben Hardin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int numberCats = 5;
int numberDogs = 7;

void printTotalAnimals(){

	int totalAnimals = 0;
	totalAnimals += numberCats;
	totalAnimals += numberDogs;

	cout << "Total number of animals: " << totalAnimals << endl;

}

void printTotalCats(){
	cout << "Number of cats: " << numberCats << endl;
}

void printTotalDogs(){
	cout << "Number of dogs: " << numberDogs << endl;
}

void addCat(){
	++numberCats;
	cout << "New cat acquired!" << endl;
	printTotalCats();
	printTotalAnimals();
}

void addDog(){
	++numberDogs;
	cout << "New dog acquired!" << endl;
	printTotalDogs();
	printTotalAnimals();
}


int main() {

	printTotalCats();
	printTotalDogs();

	printTotalAnimals();

	addCat();
	addDog();

	return 0;
}

