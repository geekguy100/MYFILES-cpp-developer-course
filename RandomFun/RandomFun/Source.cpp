#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	// Seeding the random number generator with the computer's
	// current time.
	srand(time(nullptr));
	
	int maxValue = 10;

	// valueOne = a value >=0 and < 10
	int valueOne = rand() % maxValue;
	
	// valueTwo = a value >= 1 and <= 10.
	int valueTwo = rand() % maxValue + 1;

	cout << valueOne << endl;
	cout << valueTwo << endl;

	system("pause");
}