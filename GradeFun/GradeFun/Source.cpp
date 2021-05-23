#include <iostream>
using namespace std;

int main()
{
	char letterGrade;

	bool success = true;

	do
	{
		system("cls");
		success = true;

		cout << "Please enter a letter grade: ";
		cin >> letterGrade;

		switch (letterGrade)
		{
			case 'A':
			case 'a':
				cout << "Amazing job!";
				break;
			case 'B':
			case 'b':
				cout << "Way to go!";
				break;
			case 'C':
			case 'c':
				cout << "That's average...";
				break;
			case 'D':
			case 'd':
				cout << "Close to failing!";
				break;
			case 'F':
			case 'f':
				cout << "Oh no! You are failing the course!";
				break;
			default:
				cout << "You didn't enter a correct letter grade." << endl;
				system("pause");
				success = false;
		}
	}
	while (!success);

	cout << endl;

	system("pause");
	return 0;
}