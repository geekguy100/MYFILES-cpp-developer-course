#include <iostream>
#include <string>

using namespace std;

double getMax(double a, double b);
int getMax(int a, int b);
string getMax(const string & a, const string & b);
int main()
{
	string nameOne{ "Apple" };
	string nameTwo{ "apple" };

	cout << getMax(12, 13) << endl;
	cout << getMax(1.23, 2.22) << endl;
	cout << getMax(nameOne, nameTwo) << endl;

	system("pause");
	return 0;
}

double getMax(double a, double b)
{
	double max;
	(a > b) ? (max = a) : (max = b);

	return max;
}

int getMax(int a, int b)
{
	int max;
	(a > b) ? (max = a) : (max = b);
	return max;
}

string getMax(const string & a, const string & b)
{
	string max;
	(a > b) ? (max = a) : (max = b);
	return max;
}