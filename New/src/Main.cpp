/*
 * The New Constructor
 */

#include <iostream>

class Animal{
private:
	std::string name;

public:
	Animal(){
		std::cout << "Animal created." << std::endl;
	}

	Animal(const Animal& other) :
		name(other.name) {
		std::cout << "Animal created by copying." << std::endl;
	}

	~Animal() {
		std::cout << "Destructor called." << std::endl;
	}

	void setName(std::string name){
		this->name = name;
	}

	void speak() const {
		std::cout << "My name is: " << name << std::endl;
	}
};

int main(){

	Animal *pCat1 = new Animal();
	pCat1->setName("Freddy");
	pCat1->speak();
	delete pCat1;

	std::cout << sizeof(pCat1) << std::endl; // Same size as a long.

	return 0;
}
