#include <iostream>

using namespace std;

int main()
{
	//int count = 0;
	//cout << "WHILE LOOP" << endl;

	//// while loop
	//while (count < 10)
	//{
	//	count++;
	//	cout << count << endl;
	//}

	//// do-while loop
	//cout << endl << "DO WHILE LOOP" << endl;
	//count = 0;
	//do
	//{
	//	count++;
	//	cout << count << endl;
	//} while (count < 10);


	//// for loop
	//cout << endl << "FOR LOOP" << endl;
	//count = 0;

	//for (int i = 0; i < 10; ++i)
	//{
	//	cout << i << endl;
	//}



	//bool correctInput = false;
	//int age;

	//while (!correctInput)
	//{
	//	cout << "Please enter your age: ";
	//	cin >> age;

	//	if (age < 0)
	//		cout << "You entered an invalid age. Please try again." << endl;
	//	else
	//		correctInput = true;
	//}

	//cout << "Thank you for your input!" << endl;


	double sum = 0;

	// Priming Read
	int input;
	cout << "Please enter a non-negative integer to continue or a negative integer to exit: ";
	cin >> input;

	while (input >= 0)
	{
		cout << "Please enter a number to add to the sum: ";
		double num;
		cin >> num;

		sum += num;

		cout << "Please enter a non-negative integer to continue or a negative integer to exit: ";
		cin >> input;
	}

	cout << "The sum of all of the input numbers is: " << sum << endl;

	system("pause");
	return 0;
}