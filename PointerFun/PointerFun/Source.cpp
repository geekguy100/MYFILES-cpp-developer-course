#include <iostream>
using namespace std;

int main()
{
	int myInt = 150;
	int * somePtr = &myInt;

	cout << "myInt originally = " << myInt << endl;
	cout << "Pointer holds value " << somePtr << endl;
	cout << "Pointer deferenced = " << *somePtr << endl;

	*somePtr = 200;

	cout << "After modifying the deferenced pointer, myInt = " << myInt << endl;
	cout << endl;

	double myDouble = 3.14;
	double * doublePtr = &myDouble;
	
	cout << "myDouble = " << myDouble << endl;
	cout << "doublePtr = " << doublePtr << endl;
	cout << "*doublePtr = " << *doublePtr << endl;
	
	system("pause");
}