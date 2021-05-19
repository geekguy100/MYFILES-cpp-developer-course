#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age;
	string fullName;

	cout << "Please enter your name:";
	getline(cin, fullName);

	cout << "Please enter your age: ";
	cin >> age;

	cout << "Full name and age: " << fullName << ", " << age << endl;

	system("pause");
	return 0;
}