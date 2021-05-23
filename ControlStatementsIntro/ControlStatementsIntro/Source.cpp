#include <iostream>

using namespace std;

int main()
{
	int age = 21;
	cout << age << endl;

	if (age < 21)
		cout << "You cannot legally drink alcohol!";
	else
		cout << "You can drink alcohol!";
	cout << endl << endl;

	for (int i = 0; i < age; ++i)
	{
		cout << "Age is now " << (i++) << endl;
	}

	system("pause");
	return 0;
}