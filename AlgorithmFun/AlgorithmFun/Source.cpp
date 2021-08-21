#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

void fillVector(vector<int> & vec);
void printVector(const vector<int>& vec);
void countFives(const vector<int> & vec);
int main()
{
	vector<int> myVector;
	fillVector(myVector);
	printVector(myVector);
	countFives(myVector);

	cout << "Replacing 5s with 99s..." << endl;
	//replace(start_iterator, end_iterator, elem_to_replace, replacing_element).
	replace(myVector.begin(), myVector.end(), 5, 99);

	countFives(myVector);
	printVector(myVector);

	cout << endl;
	system("pause");
	return 0;
}

// Fills up a vector with 20 random numbers [1,5].
void fillVector(vector<int> & vec)
{
	srand(time(nullptr));
	int temp;

	for (int i{}; i < 20; ++i)
	{
		temp = (rand() % 5) + 1; // [1,5]
		vec.push_back(temp);
	}
}

void printVector(const vector<int>& vec)
{
	for (int num : vec)
	{
		cout << num << endl;
	}
}

void countFives(const vector<int> & vec)
{
	// count() returns the number of occurences of a particular element.
	// count(start_iterator, end_iterator, element_to_look_for);
	int numFives{ count(vec.begin(), vec.end(), 5) };
	cout << "There are " << numFives << " 5s in the vector." << endl;
}