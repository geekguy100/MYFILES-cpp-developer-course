#include <iostream>

using namespace std;

int main()
{
	int myNums[2][3] // A 2 by 3 array (2 rows, 3 columns).
	{
		{1,2,3},
		{4,5,6}
	};


	const int ROW_SIZE = 2;
	const int COL_SIZE = 3;

	for (int row = 0; row < ROW_SIZE; ++row)
	{
		for (int col = 0; col < COL_SIZE; ++col)
		{
			cout << myNums[row][col] << " ";
		}

		cout << endl;
	}

	cout << endl << endl;

	for (int row = ROW_SIZE - 1; row >= 0; --row)
	{
		for (int col = COL_SIZE - 1; col >= 0; --col)
		{
			cout << myNums[row][col] << " ";
		}

		cout << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}