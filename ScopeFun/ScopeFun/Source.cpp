#include <iostream>

using namespace std;

void someFunction(int num);

double myGlobalDouble = 3.14159;

int main()
{
	int localToMain = 20;
	cout << "localToMain = " << localToMain << endl;
	cout << "myGlobalDouble (in main()) = " << myGlobalDouble << endl;

	someFunction(25);

	cout << endl << endl;
	system("pause");
	return  0;
}

void someFunction(int num)
{
	int myLocalNum = 100;
	static int myStatic = 500;
	myStatic++;

	cout << "myLocalNum = " << myLocalNum << endl;
	cout << "Parameter num = " << num << endl;
	cout << "myGlobalDouble (in someFunction()) = " << myGlobalDouble << endl;
	cout << "myStatic = " << myStatic << endl;
}
