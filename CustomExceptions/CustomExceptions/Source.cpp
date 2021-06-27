#include <iostream>
#include "AngryCatException.h"

using namespace std;

void feedKitty(int numTreats);
int main()
{
	int numTreats{ 0 };
	cout << "How many treats should we feed kitty?: ";
	cin >> numTreats;

	try
	{
		feedKitty(numTreats);
	}
	catch (const AngryCatException & err)
	{
		cerr << err.what() << endl;
	}
	catch (const runtime_error & err)
	{
		cerr << "Runtime error: " << err.what() << endl;
	}

	cout << endl;
	system("pause");
}

void feedKitty(int numTreats)
{
	if (numTreats < 3)
		throw AngryCatException("Kitty is pissed with this number of treats");
	else if (numTreats < 5)
		throw AngryCatException();


	cout << "Kitty is happy with " << numTreats << " treats!" << endl;
}