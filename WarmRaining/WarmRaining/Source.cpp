#include <iostream>

using namespace std;

int main()
{
	bool isRaining = true;
	bool isWarm = true;

	cout << boolalpha;
	cout << "And: " << (isRaining && isWarm) << endl;
	cout << "Or: " << (isRaining || isWarm) << endl;
	cout << "Not: " << (!isRaining);

	getchar();
	return 0;
}