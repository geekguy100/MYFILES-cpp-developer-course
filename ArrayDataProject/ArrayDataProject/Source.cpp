#include <iostream>
#include <array>

using namespace std;

int main()
{
	const int ARRAY_SIZE = 5;
	array<int, ARRAY_SIZE> nums{};

	for (int & num : nums)
	{
		cout << "Please enter a number: ";
		cin >> num;
		cout << "----------" << endl;
	}

	cout << "Printing numbers multipled by 2:" << endl;
	for (int num : nums)
	{
		cout << (num * 2) << endl;
	}


	cout << endl << endl;
	system("pause");
}