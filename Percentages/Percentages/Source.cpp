#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fullName;
	string location;
	int initialScore;

	// Keep requesting input until the user gives us a proper integer.
	while (true)
	{
		try
		{
			cout << "Please enter an integer 0-100: ";
			cin >> initialScore;

			if (initialScore < 0 || initialScore > 100)
				throw(initialScore);
			else
				break;
		}
		catch (int score)
		{
			cout << "Score is invalid." << endl;
		}
	}

	cin.get();

	cout << "Please enter your full name: ";
	getline(cin, fullName);

	cout << "Please enter your city, state, and country: ";
	getline(cin, location);


	cout << endl << "Hello, " << fullName << "." << endl << "We heard you are from " << location << "." << endl;
	cout << "Your inital score is " << initialScore << ", but with 5 extra points it is now " << (initialScore + 5) << "!" << endl;


	system("pause");
	return 0;
}