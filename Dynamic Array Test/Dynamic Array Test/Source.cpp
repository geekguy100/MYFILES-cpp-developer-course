#include <iostream>

using namespace std;

int main()
{
	int arrSize;
	cout << "Please enter an array size: ";
	cin >> arrSize;

	int * myArr = new int[arrSize];

	for (int i = 0; i < arrSize; ++i)
	{
		*(myArr + i) = i * 2;
	}

	for (int i = 0; i < arrSize; ++i)
	{
		cout << myArr[i] << ", ";
	}

	delete[] myArr;

	cout << endl;
	system("pause");
	return 0;
}