#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	const int NUM_PEOPLE = 5;

	vector<string> names(NUM_PEOPLE);
	vector<double> weights(NUM_PEOPLE);
	
	for (int i = 0; i < NUM_PEOPLE; ++i)
	{
		cout << "Please enter a name: ";
		getline(cin, names[i]);

		cout << "Please enter " << names[i] << "'s weight: ";
		cin >> weights[i];
		cin.get();
		cout << endl;
	}
	// Why does inputting a char or string in place of an integer yield such unexpected behaviour?
	cout << "~~~~~~~~~~~~~~~~" << endl << endl;

	for (int i = 0; i < NUM_PEOPLE; ++i)
	{
		cout << names[i] + " weighs " << weights[i] << " lbs." << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}