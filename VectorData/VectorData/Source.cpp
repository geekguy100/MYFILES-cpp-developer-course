#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers;

	int input{};

#pragma region Priming Read Approach
	// By using the priming read, we don't need to check if the input >= 0 a second
	// time inside of the loop!

	cout << "Please enter a non-negative integer, or a negative integer to quit: ";
	cin >> input;

	while (input >= 0)
	{
		numbers.push_back(input);

		cout << "Please enter a non-negative integer, or a negative integer to quit: ";
		cin >> input;
	}
#pragma endregion


#pragma region Non Priming Read Approach
	//do
	//{
	//	cout << "Please enter a non-negative interger, or a negative integer to quit: ";
	//	cin >> input;

	//	if (input >= 0)
	//		numbers.push_back(input);
	//} 
	//while (input >= 0);
#pragma endregion


	cout << "---------------" << endl;
	cout << "Printing numbers multiplied by 2: " << endl;

	for (int num : numbers)
	{
		cout << (num * 2) << endl;
	}


	cout << endl << endl;
	system("pause");
	return 0;
}