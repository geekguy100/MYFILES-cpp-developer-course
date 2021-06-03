#include <iostream>
#include <vector>
using namespace std;

int multiply(int num1, int num2, int num3);

int main()
{
	const int NUM_COUNT = 3;
	vector<int> nums(NUM_COUNT);

	for (int i = 0; i < NUM_COUNT; ++i)
	{
		cout << "Enter integer " << (i + 1) << ": ";
		cin >> nums[i];

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Invalid input. Please enter an integer: ";
			cin >> nums[i];
		}
	}

	cout << "The product of the three numbers is: " << multiply(nums[0], nums[1], nums[2]) << endl;;

	cout << endl << endl;
	system("pause");
	return 0;
}

int multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}