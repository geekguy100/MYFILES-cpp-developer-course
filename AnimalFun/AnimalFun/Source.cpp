#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Test.h"
#include "Test2.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "DOG: " << endl;
	Animal* dogPtr{ new Dog{"Pug", "Fido", 22} };
	cout << "Make noise: " << dogPtr->makeNoise() << endl;
	cout << "Eat: " << dogPtr->eat() << endl;

	cout << endl << "CAT: " << endl;
	Animal* catPtr{ new Cat{"Mittens", 13} };
	cout << "Make noise: " << catPtr->makeNoise() << endl;
	cout << "Eat: " << catPtr->eat() << endl;
	reinterpret_cast<Cat*>(catPtr)->chaseMouse();


	delete dogPtr;
	delete catPtr;
	dogPtr = nullptr;
	catPtr = nullptr;

	cout << endl;
	system("pause");
	return 0;
}