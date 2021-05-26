#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void printVector(vector<T> vec)
{
	for (T element : vec)
	{
		cout << element << endl;
	}
}

int main()
{
	vector<int> intVector;
	vector<string> stringVector(3);

	for (int i = 0; i < 10; ++i)
	{
		intVector.push_back(i);
	}

	stringVector[0] = "Kyle";
	stringVector[1] = "Steven";
	stringVector[2] = "Olivia";
	stringVector.push_back("Mom");
	stringVector.push_back("Dad");

	printVector(stringVector);
	cout << "-----" << endl;

	cout << "Inserting new element at **begin() + 2** of the vector..." << endl;
	stringVector.insert(stringVector.begin() + 10, "Johnny");

	cout << "-----" << endl;

	printVector(stringVector);


	cout << endl << endl;
	system("pause");
	return 0;
}