#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;


vector<int> generateVector(int amnt);

int main()
{
	// Opening Files for Output
	ofstream origOutFile;
	origOutFile.open("numbers.txt");

	ofstream doubledNumsFile;
	doubledNumsFile.open("output.txt");

	// Creating vector of randomly-generated numbers
	cout << "How many integers would you like to generate?: ";
	int num;
	cin >> num;
	vector<int> numVec{ generateVector(num) };

	// Printing numbers to files
	for (int i : numVec)
	{
		origOutFile << i << endl;
		doubledNumsFile << (i * 2) << endl;
	}

	origOutFile.close();
	doubledNumsFile.close();
	cout << "DONE!" << endl;
	std::system("pause");
	return 0;
}

// Returns a vector<int> with an amount of randomly generated integers.
// amnt - the amount of random integers to populate the vector.
vector<int> generateVector(int amnt)
{
	srand(time(nullptr));

	vector<int> vec(amnt);
	const int MAX{ 200 };
	const int MIN{ 1 };

	for (int i = 0; i < amnt; ++i)
	{
		int num = (rand() % (MAX - MIN + 1)) + MIN;
		vec[i] = num;
	}

	return vec;
}