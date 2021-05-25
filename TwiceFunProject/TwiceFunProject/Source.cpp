#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 10> nums{};

	for (int i = 1; i <= nums.size(); ++i)
	{
		nums[i - 1] = i * 2;
	}

	for (int num : nums)
	{
		cout << num << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}