#include <iostream>

using namespace std;

int main()
{
	int age;
	char gender;

	cout << "Please enter your age: ";
	cin >> age;

	cout << "Please enter your gender (M, F, or O): ";
	cin >> gender;

	if ((gender == 'F' || gender == 'f') && age >= 60)
		cout << "You qualify for a discount!" << endl;
	else
		cout << "You do not qualify for a discount." << endl;

	system("pause");
}