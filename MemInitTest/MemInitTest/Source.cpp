#include <iostream>

using namespace std;

class Example
{
public:
	Example()
	{
		cout << "Hello, World!" << endl;
	}

	Example(int num)
	{
		cout << "Hello, " << num << endl;
	}
};

class Entity
{
public:
	// Even though we are initializing our object member
	// inside of the constructor's body with Example's parameterized constructor, Example's no-arg constructor
	// is still being called.
	// This means "Hello, World!" AND "Hello, 22" will both be printed.
	// To avoid this, use the member initialization list
	//
	// (i.e. 'Entity() : ex{22}' or 'Entity() : ex{Example(22)}'
	Entity()
		: ex{ 2 }
	{
		this->ex = Example(3);
	}
private:
	Example ex{ 1 };
};

int main()
{
	Entity myEntity = Entity();

	cout << endl << endl;
	system("pause");
}