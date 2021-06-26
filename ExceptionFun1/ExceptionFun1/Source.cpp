#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;


void printVector(const vector<string> & v);
int main()
{
	vector<string> names{5};

	names.at(0) = "Kyle";
	names.at(1) = "John";
	names.at(2) = "Steven";
	names.at(3) = "Olivia";
	names.at(4) = "Mom";

	printVector(names);

	try
	{
		// exception?
		names.at(5) = "Dad";
	}
	catch(const out_of_range & err)
	{
		cout << err.what() << endl;
	}


	cout << endl << endl;
	system("pause");
	return  0;
}

void printVector(const vector<string> & v)
{
	for (string e : v)
	{
		cout << e << endl;
	}
}