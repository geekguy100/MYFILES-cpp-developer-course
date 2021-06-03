#include <iostream>
using namespace std;

int sumArray(int arr[], const int ARRAY_SIZE);

int main()
{
	const int ARRAY_SIZE = 5;

	int nums[ARRAY_SIZE]{};
	
	for (int i = 0; i < ARRAY_SIZE; ++i)
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

	cout << "The sum of the " << ARRAY_SIZE << " numbers is " << sumArray(nums, ARRAY_SIZE);

	cout << endl << endl;
	system("pause");
	return 0;
}

int sumArray(int nums[], const int ARRAY_SIZE)
{
	int sum{};
	for (int i = 0; i < ARRAY_SIZE; ++i)
	{
		sum += nums[i];
	}

	return sum;
}