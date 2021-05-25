#include <iostream>
#include <string>

using namespace std;

double div(double a, double b)
{
	if (b == 0)
		throw "Divide by zero exception";
	else
		return a / b;
}

int main()
{
	const int ARRAY_SIZE = 5;
	int myArray[ARRAY_SIZE];

	string names[]{ "Kyle","Steven","Olivia","Molly" };

	myArray[0] = 12;
	myArray[1] = 22;
	myArray[2] = 52;
	myArray[3] = 90;
	myArray[4] = 64;

	// output: 12 22 52 90 64

	//for (auto name : names)
	//{
	//	cout << name << endl;
	//}

	const int SIZE = 10;
	int nums[SIZE];
	for (int i = 0; i < SIZE; ++i)
	{
		nums[i] = (i + 1);
	}

	for (int num : nums)
	{
		cout << num << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}