// Example showing Polymorphism
// Example of Basic Inheritance & introducing the protected keyword
#include <iostream>
#include <string>

using namespace std;

// Base class.
class Pet {
public:
	// Add virtual keyword here!
	virtual string makeSound() {
		return "Default Animal Noise!";
	}
};

// Inherited class.
class Cat : public Pet {
public:
	string makeSound() {
		return "Meow!";
	}
};

// Inherited class.
class Dog : public Pet {
public:
	string makeSound() {
		return "Woof!";
	}
};


int main(int argc, char const *argv[]) {
	Pet* pet;
	Cat cat;
	Dog dog;
	
	// Store address of Dog, make it make a sound!
	pet = &dog;
	cout << pet->makeSound() << endl;

	// Swap to cat!
	pet = &cat;
	cout << pet->makeSound() << endl;

	// Delete pointer
	delete pet;

	return 0;
}