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
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
}

int main()
{
	vector<string> familyMembers(5);

	for (int i = 0; i < familyMembers.size(); ++i)
	{
		cout << "Type in a family member " << (i+1) << "'s name: ";
		getline(cin, familyMembers[i]);
	}
	cout << endl;

	cout << "Family: " << endl;
	printVector(familyMembers);

	cout << "After inserting John Baugh as the third element..." << endl;
	familyMembers.insert(familyMembers.begin() + 2, "John Baugh");
	printVector(familyMembers);

	cout << "Removing last element of vector..." << endl;
	familyMembers.pop_back();
	printVector(familyMembers);

	system("pause");
	return 0;
}