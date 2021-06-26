#include "Dog.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	try
	{
		Dog dog1("Cockapoo");
		Dog dog2("Poodle");

		cout << "Dog1 breed is " << dog1.getBreed() << endl;
		cout << "Dog2 breed is " << dog2.getBreed() << endl;
	}
	catch (const runtime_error & err)
	{
		cerr << err.what() << endl;
	}

	cout << endl << endl;
	system("pause");

	// Object pointer testing

	//Dog dog1{ "Cockapoo" };
	//Dog * dog2{ &dog1 };

	//cout << endl;
	//cout << "Dog1 breed is " << dog1.getBreed() << endl;
	//cout << "Dog2 breed is " << dog2->getBreed() << endl;

	//cout << endl;
	//cout << "Changing Dog2 breed to Boxer..." << endl;
	//dog2->setBreed("Boxer");

	//cout << endl;
	//cout << "Dog1 breed is " << dog1.getBreed() << endl;
	//cout << "Dog2 breed is " << dog2->getBreed() << endl;

	//cout << endl << endl;
	//system("pause");
}