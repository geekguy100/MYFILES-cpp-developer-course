#include <iostream>

using namespace std;

void modifyGlobal();

int counter = 0;

int main()
{
	cout << "Before looping 100 times, counter = " << counter << endl;

	for (int i = 0; i < 100; ++i)
	{
		modifyGlobal();
	}

	cout << "After looping 100 times, counter = " << counter << endl;

	system("pause");
	return 0;
}

void modifyGlobal()
{
	counter++;
}