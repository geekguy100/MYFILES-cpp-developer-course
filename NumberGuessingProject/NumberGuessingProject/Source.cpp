#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// Seed the random number generator.
	srand(time(nullptr));
	int min = 1;
	int max = 100;
	int randomNumber = (rand() % (max - min + 1)) + min;

	int attempts = 0;
	bool guessed = false;

	cout << "I've selected a random number between " << min << " and " << max << " (inclusive)." << endl << endl;

	do
	{
		cout << "Take a guess: ";
		int guess;
		cin >> guess;

		if (guess < min || guess > max)
			cout << "That was a wasted guess! Try again..." << endl;
		else if (guess < randomNumber)
			cout << "That guess was too low!" << endl;
		else if (guess > randomNumber)
			cout << "That guess was too high!" << endl;
		else
			guessed = true;

		++attempts;
	} 
	while (!guessed);

	cout << "Perfect guess! You guessed the number in " << attempts << " attempts." << endl;
	

	system("pause");
	return 0;
}