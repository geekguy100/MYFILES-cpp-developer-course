#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));

	int min = 1;
	int max = 6;

	int numberOfRolls = 100;

	cout << "~~~~~~~\tDICE ROLLING PROGRAM\t~~~~~~~" << endl;
	cout << "~~~~~~~\tROLLING " << numberOfRolls << " TIMES\t~~~~~~~" << endl << endl;

	for (int i = 0; i < numberOfRolls; ++i)
	{
		int numRolled = (rand() % (max - min + 1)) + min;

		cout << "Number rolled is '" << numRolled << "'" << endl;
	}

	system("pause");
	return 0;
}