#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age;
	cout << "Welcome to the Pub and Grill!" << endl
		<< "Please enter your age: ";

	cin >> age;
	cout << endl;

	if (age >= 21)
		cout << "Have a beer!" << endl;
	else if (age >= 16)
		cout << "Have some Coca-Cola!" << endl;
	else
		cout << "Have a cold glass of water." << endl;
	
	cout << "Thanks for coming! Enjoy your stay." << endl;

	system("pause");
	return 0;
}