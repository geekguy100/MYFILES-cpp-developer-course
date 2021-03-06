#include <iostream>
#include <array>
using namespace std;

// Need to define our ARRAY_SIZE variable up here
// so we can use it as an argument in our sumArray's array<> parameter.
const int ARRAY_SIZE = 10;
int sumArray(array<int, ARRAY_SIZE> nums);
void sumArray(array<int, ARRAY_SIZE> nums, int & sum);

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

	cout << "Sum of all numbers using sumArray(array<>) is " << sumArray(nums) << endl;

	int sum;
	sumArray(nums, sum);
	cout << "Sum of all numbers using sumArray(array<>, int & sum) is " << sum << endl;


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

void sumArray(array<int, ARRAY_SIZE> nums, int & sum)
{
	sum = 0;

	for (int num : nums)
		sum += num;
}

// Let's not reinvent the wheel!
// Instead of recreating our sumArray() function with slightly altered logic, consider the following alternative:
//
//
//		void sumArray(array<int, ARRAY_SIZE> nums, int & sum)
//		{
//			sum = sumArray(nums);
//		}
//
//
// Notice how we make use of our pre-existing function to provide functionality to this one!
// That way, we don't need to write duplicated code.