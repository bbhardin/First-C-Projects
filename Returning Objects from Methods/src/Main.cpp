/*
 * Returing Objects from Methods
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

Animal *createAnimal() {
	Animal *pAnimal = new Animal();
	pAnimal->setName("Bertie");
	return pAnimal;
}

int main(){

	Animal *pFrog = createAnimal();
	pFrog->speak();
	delete pFrog;

	return 0;
}
