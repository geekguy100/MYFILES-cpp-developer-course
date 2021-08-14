#include <iostream>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"

using namespace std;

void displayPrompt();
Player * createPlayer(int classNum);
void displayCharacters(const vector<Player*> & players);
Player::Race promptRace();
int main()
{
	vector<Player*> playerVector;

	// Priming Read
	int input{ -1 };
	displayPrompt();
	cin >> input;

	// Keep prompting user to create characters
	// until they no longer want to.
	while (input != 0)
	{
		playerVector.push_back(createPlayer(input));

		displayPrompt();
		cin >> input;
	}

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	// Display all characters created to 
	// standard output.
	displayCharacters(playerVector);

	// Returning memory
	for (Player* player : playerVector)
	{
		delete player;
		player = nullptr;
	}

	playerVector.clear();


	cout << endl;
	system("pause");
	return 0;
}

// Create a Player* with a given class number.
// int classNum - the class the user selected for this character at runtime.
// Returns - the Player* created.
Player * createPlayer(int classNum)
{
	cin.get();
	cout << endl;

	Player * player;

	// Prompt name
	string name;
	cout << "What is your character's name?: ";
	getline(cin, name);
	cout << endl;

	// Prompt Race
	Player::Race race{ promptRace() };

	switch (classNum)
	{
	case 1: // Warrior
		player = new Warrior{ name, race, 200, 0 };
		break;
	case 2: // Priest
		player = new Priest{ name, race, 100, 200 };
		break;
	case 3: // Mage
		player = new Mage{ name, race, 150, 150 };
		break;
	default: // Error
		cerr << "ERROR: cannot create a class with a classNum > 3" << endl;
		return nullptr;
	}
	
	return player;
}

// Prompts the user to select a Race for their character.
// Returns - the Race selected.
Player::Race promptRace()
{
	cout << "What is your character's race?" << endl;
	cout << "\t1 - Human" << endl
		<< "\t2 - Elf" << endl
		<< "\t3 - Dwarf" << endl
		<< "\t4 - Orc" << endl
		<< "\t5 - Troll" << endl
		<< "INPUT: ";

	int raceInput;
	cin >> raceInput;
	cout << endl;

	switch (raceInput)
	{
	case 1:
		return Player::HUMAN;
	case 2:
		return Player::ELF;
	case 3:
		return Player::DWARF;
	case 4:
		return Player::ORC;
	case 5:
		return Player::TROLL;
	default:
		cerr << "ERROR: Could not select a race with input '" << raceInput 
			<< "'. Defaulting to race HUMAN" << endl;
		return Player::HUMAN;
	}
}

// Displays a prompt for the user to choose a character to create or
// to exit character creation.
void displayPrompt()
{
	cout << "Which of the following would you like to create?" << endl;
	cout << "\t1 - Create a Warrior" << endl
		<< "\t2 - Create a Priest" << endl
		<< "\t3 - Create a Mage" << endl
		<< "\t0 - Exit character creation" << endl;

	cout << "INPUT: ";
}

// Displays all of the characters created to standard output.
// const vector<Player*> & players - the vector containing all of the players
//									 the user created.
void displayCharacters(const vector<Player*> & players)
{
	for (Player* player : players)
	{
		if (player == nullptr)
			continue;

		cout << "--" << player->getName() << "--" << endl
			<< "\tHP: " << player->getHitPoints() << endl
			<< "\tMP: " << player->getMagicPoints() << endl
			<< "\tClass: " << player->getClass() << endl
			<< "\tRace: " << player->getRace() << endl
			<< "\tAttack: " << player->attack() << endl;
		cout << endl;
	}
}