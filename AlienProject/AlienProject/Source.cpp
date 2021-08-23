#include <iostream>
#include <vector>
#include "Alien.h"

using namespace std;

void displayMenu();
void createAlien(vector<unique_ptr<Alien>> & v);
void printAllAliens(const vector<unique_ptr<Alien>> & v);
void testOperators();
int main()
{
	vector<unique_ptr<Alien>> alienVector;

	int input;
	displayMenu();
	cin >> input;

	while (input != 4)
	{
		switch (input)
		{
		case 1:
			createAlien(alienVector);
			break;
		case 2:
			printAllAliens(alienVector);
		case 3:
			system("cls");
			testOperators();
			break;

		// Invalid input...
		default:
			cerr << "Invalid input. Please enter a valid selection..." << endl << endl;
			break;
		}

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
		}
		else
		{
			system("pause");
			system("cls");
		}

		displayMenu();
		cin >> input;
	}

	return 0;
}

void displayMenu()
{
	cout << "Alien Breeder:" << endl;
	cout << "1 - Create an Alien" << endl
		<< "2 - Print all Alien Details" << endl
		<< "3 - Test Overloaded Operators" << endl
		<< "4 - Exit" << endl;

	cout << "INPUT: ";
}

// Prompts the user to enter the Alien's details and
// pushes it onto our vector.
void createAlien(vector<unique_ptr<Alien>> & v)
{
	cout << "Enter weight: ";
	int weight;
	cin >> weight;

	cout << "Enter height: ";
	int height;
	cin >> height;

	cout << "Enter gender (M or F): ";
	char gender;
	cin >> gender;

	// Can't have this here b/c the pointer will deallocate once
	// it goes out of scope, so we have to create the Alien directly in the 
	// argument list.
	// VVVVVVVVVVVVVVVVVVVVVVVVVVV
	/*auto alien{ make_unique<Alien>(weight, height, gender) };*/
	v.push_back(make_unique<Alien>(weight, height, gender));
}

void printAllAliens(const vector<unique_ptr<Alien>> & v)
{
	for (auto & elem : v)
		cout << *elem << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void testOperators()
{
	Alien a1{ 2, 3, 'M' }; // 2
	Alien a2{ 1, 4, 'F' }; // 3
	Alien a3{ 2, 4, 'F' };

	cout << "Alien 1:" << endl << a1 << endl;
	cout << "Alien 2:" << endl << a2 << endl;
	cout << "Alien 3: " << endl << a3 << endl;
	
	cout << "Alien 1 == Alien 2? " << boolalpha << (a1 == a2) << endl;
	cout << "Alien 1 != Alien 3? " << (a1 != a3) << endl;
	cout << "Alien 1 < Alien 3? " << (a1 < a3) << endl;

	Alien baby{ a1 + a3 };
	cout << "Alien baby A1+A3: " << endl << baby << endl;
	cout << "A1 = baby...";
	a1 = baby;

	cout << a1;
}