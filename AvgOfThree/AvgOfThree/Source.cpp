#include <iostream>
using namespace std;

double avg(double nums[]);

int main()
{
	double nums[3];
	double avg = 0;
	double sum = 0;

	int count = 0;
	int length = sizeof(nums) / sizeof(nums[0]);

	while (count < length)
	{
		cout << "Enter number " << (count + 1) << ": ";
		cin >> nums[count];

		sum += nums[count];

		++count;
	}

	avg = sum / length;

	cout << "The average of the three numbers is " << avg << endl;

	system("pause");
	return 0;
}