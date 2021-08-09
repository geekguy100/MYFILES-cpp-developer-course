#include "Animal.h"
#include "Dog.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*cout << "Enter name for animal: ";
	string name;
	getline(cin, name);

	cout << "Enter weight for animal: ";
	double weight;
	cin >> weight;

	Dog animal{ "Cockapoo", name, weight };

	cout << endl;
	cout << animal.getName() << "\t" << animal.getWeight() << endl;
	cout << animal.makeNoise() << endl;
	animal.digHole();
	animal.chaseCat();*/

	Animal* dogPtr{ new Dog{"Pug", "Fido", 22} };
	cout << "Make noise: " << dogPtr->makeNoise() << endl;
	cout << "Eat: " << dogPtr->eat() << endl;


	delete dogPtr;
	dogPtr = nullptr;

	cout << endl;
	system("pause");
	return 0;
}