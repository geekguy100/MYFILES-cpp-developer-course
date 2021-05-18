#include <iostream>

using namespace std;

int main()
{
	cout << boolalpha;

	int myAge = 21;

	cout << (myAge >= 21 ? "You're at least 21 yrs old." : "You're younger than 21.");

	getchar();
	return 0;
}