#include <iostream>
#include <string>

using namespace std;

struct Package
{
	double monthlyFee;
	int jamsPerMonth;
	double additionalJamCost;
};

int main()
{
	// Create the three packages.
	Package packageA = {8, 2, 5};
	Package packageB = {12, 4, 4};
	Package packageC = {15, 6, 3};
	Package chosenPackage;

	// Prompt user to determine which package they own.
	char inputPackage;
	bool correctInput = false;
	while (!correctInput)
	{
		correctInput = true;

		try
		{
			cout << "Which package do you own? Please enter A, B, or C: ";
			cin >> inputPackage;
			switch (inputPackage)
			{
				case 'A':
				case 'a':
					chosenPackage = packageA;
					break;
				case 'B':
				case 'b':
					chosenPackage = packageB;
					break;
				case 'C':
				case 'c':
					chosenPackage = packageC;
					break;
				default:
					throw(inputPackage);
			}
		}
		catch (char input)
		{
			cout << "You did not enter a valid input..." << endl;
			correctInput = false;
		}
	}

	// Prompt user for total jams purchased this month, in total.
	cout << "How many jams have you purchased this month in total?: ";
	int purchasedJams;
	cin >> purchasedJams;

	if (purchasedJams < chosenPackage.jamsPerMonth)
	{
		cout << "You at least must own the given jams per month. Setting your purchased jams to " << chosenPackage.jamsPerMonth << "..." << endl;
		purchasedJams = chosenPackage.jamsPerMonth;
	}

	// Calculate how many extra jams the person purchased.
	int diff = purchasedJams - chosenPackage.jamsPerMonth;

	// Calculate payment.
	// If our diff is > 0, then we need to tack on extra payment.
	double cost = chosenPackage.monthlyFee;
	cost += (diff * chosenPackage.additionalJamCost);

	cout << endl << "Your total cost for this month, owning package " << inputPackage << " and owning " << purchasedJams << " jams in total is " << "$" << cost << "." << endl;
	cout << "You're " << diff << " jams over your package's monthly threshold!";

	cout << endl << endl;
	std::system("pause");
	return 0;
}