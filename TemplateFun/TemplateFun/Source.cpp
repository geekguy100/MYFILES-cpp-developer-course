#include <iostream>
#include <string>
#include "Swapper.h"

using namespace std;


template<class T>
T getMax(const T & a, const T & b);
template<class T>
T getMin(const T & a, const T & b);
int main()
{
	Swapper<int> intSwapper{ 5, 10 };
	Swapper<string> stringSwapper{ "John", "Bob" };

	string nameOne{ "John" };
	string nameTwo{ "Andrew" };

	cout << getMax(12, 13) << endl;
	cout << getMax(1.23, 2.22) << endl;
	cout << getMax(nameOne, nameTwo) << endl;
	cout << endl << endl;

	cout << "Testing the Swapper:" << endl;
	cout << intSwapper.getFirst() << "  " << intSwapper.getSecond() << endl;
	cout << stringSwapper.getFirst() << "  " << stringSwapper.getSecond() << endl;
	intSwapper.swap();
	stringSwapper.swap();
	cout << "Swapping..." << endl;
	cout << intSwapper.getFirst() << "  " << intSwapper.getSecond() << endl;
	cout << stringSwapper.getFirst() << "  " << stringSwapper.getSecond() << endl;
	cout << endl << endl;

	cout << getMin(nameOne, nameTwo) << endl;
	cout << getMin(1999, 2000) << endl;
	cout << getMin<string>("Ethan","Steven") << endl;

	system("pause");
	return 0;
}

template<class T>
T getMax(const T & a, const T & b)
{
	T max;
	(a > b) ? max = a : max = b;
	return max;
}

template<class T>
T getMin(const T & a, const T & b)
{
	T min;
	(a < b) ? min = a : min = b;
	return min;
}