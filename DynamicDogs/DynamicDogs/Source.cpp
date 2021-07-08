#include "Dog.h"
#include <iostream>

using namespace std;

int main()
{
	Dog * myDog = new Dog("Fido", "German Shepherd");
	Dog * otherDog = new Dog("Molly", "CockaPoo");

	cout << "We'll use the arrow member access operator." << endl;
	cout << myDog->getName() << " is breed " << myDog->getBreed() << endl;
	cout << otherDog->getName() << " is breed " << otherDog->getBreed() << endl;
	cout << endl;

	cout << "Using dereferencing and the dot operator." << endl;
	cout << (*myDog).getName() << " is breed " << (*myDog).getBreed() << endl;
	cout << (*otherDog).getName() << " is breed " << (*otherDog).getBreed() << endl;
	cout << endl;

	delete myDog;
	delete otherDog;
	myDog = nullptr;
	otherDog = nullptr;

	cout << endl;
	system("pause");
	return 0;
}