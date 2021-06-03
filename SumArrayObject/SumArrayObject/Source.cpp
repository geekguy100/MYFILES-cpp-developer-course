#include <iostream>
#include <array>
using namespace std;

// Need to define our ARRAY_SIZE variable up here since
// so we can use it as an argument in our sumArray's array<> parameter.
const int ARRAY_SIZE = 10;
int sumArray(array<int, ARRAY_SIZE> nums);

int main()
{
	array<int, ARRAY_SIZE> nums{};

	for (int i = 0; i < ARRAY_SIZE; ++i)
	{
		cout << "Enter integer " << (i+1) << ": ";
		cin >> nums[i];

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');

			cout << "Invalid input. Please enter an integer: ";
			cin >> nums[i];
		}
	}

	cout << "Sum of all numbers is " << sumArray(nums) << endl;


	cout << endl << endl;
	system("pause");
	return 0;
}

int sumArray(array<int, ARRAY_SIZE> nums)
{
	int sum{};

	for (int num : nums)
		sum += num;

	return sum;
}