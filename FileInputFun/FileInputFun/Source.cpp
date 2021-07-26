#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream infile;
	vector<int> nums;

	infile.open("input.txt");

	int inputNum;
	int sum = 0;

	while (!infile.eof())
	{
		infile >> inputNum;
		nums.push_back(inputNum);

		sum += inputNum;
	}

	auto vecIterator{ nums.cbegin() };

	cout << "Numbers read from file:" << endl;
	while (vecIterator != nums.cend())
	{
		cout << *vecIterator << endl;
		++vecIterator;
	}
	cout << "-----------------" << endl;

	cout << "The sum of all of the numbers is " << sum << "." << endl;

	infile.close();

	cout << endl;
	system("pause");
	return 0;
}