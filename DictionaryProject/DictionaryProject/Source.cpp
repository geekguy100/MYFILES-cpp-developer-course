#include <iostream>
#include <string>
#include "Dictionary.h"
using namespace std;

void displayMenu();
void getDefinition(const Dictionary & dict);
void insertWord(Dictionary & dict);
int main()
{
	Dictionary dictionary;

	int input{ -1 };
	displayMenu();

	// Priming read
	cin >> input;

	while (input != 4)
	{
		cout << endl;
		bool invalidInput{ false };

		switch (input)
		{
		case 1:
			insertWord(dictionary);
			break;
		case 2:
			getDefinition(dictionary);
			break;
		case 3:
			dictionary.printAll();
			break;

		// Invalid input
		default:
			invalidInput = true;
			system("cls");
			cerr << "ERROR: Invalid input. Please enter a valid selection." << endl << endl;

			// Clearing any error-causing input.
			cin.clear(); // Clearing the fail bit.
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignoring any error-causing input still in the input buffer.
			break;
		}

		if (!invalidInput)
		{
			system("pause");
			system("cls");
		}

		displayMenu();
		cin >> input;
	}

	cout << endl;
	system("pause");
	return 0;
}

void displayMenu()
{
	cout << "Dictionary Program" << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "1 - Add / update an existing definition." << endl;
	cout << "2 - Get definition for a word." << endl;
	cout << "3 - Print all definitions." << endl;
	cout << "4 - Exit program." << endl;

	cout << "INPUT: ";
}

void getDefinition(const Dictionary & dict)
{
	cout << "Enter a word inside of the dictionary:" << endl;
	string word;
	cin.get();
	getline(cin, word);

	cout << "\t" << dict.getDefinition(word) << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void insertWord(Dictionary & dict)
{
	string word;
	string def;

	cout << "Enter a word: ";
	cin.get();
	getline(cin, word);

	cout << "Enter the definition of '" << word << "':" << endl << "\t";
	getline(cin, def);


	bool newWord{ dict.addDefinition(word, def) };
	cout << endl;
	if (newWord)
		cout << "Word Added" << endl;
	else
		cout << "Word Updated" << endl;

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}