#include <iostream>
#include <string>

using namespace std;

void printPtr(const string & ptrName, const int * const ptr);
void printPtrValue(const string & ptrName, const int * const ptr);
void changeValue(int * ptr);

int main()
{
	cout << "Dynamically allocating memory for an integer "
		<< "and initializing it to the value 123..." << endl;
	int * myIntPtr = new int(123);

	printPtr("myIntPtr", myIntPtr);
	printPtrValue("myIntPtr", myIntPtr);
	cout << endl;


	cout << "Deferencing pointer and reassigning to a value of 90..." << endl;
	*myIntPtr = 90;

	printPtr("myIntPtr", myIntPtr);
	printPtrValue("myIntPtr", myIntPtr);
	cout << endl;


	cout << "Chaning the value at the pointer's memory address via changeValue() function. Expected 22..." << endl;
	changeValue(myIntPtr);

	printPtr("myIntPtr", myIntPtr);
	printPtrValue("myIntPtr", myIntPtr);
	cout << endl;



	delete myIntPtr;

	myIntPtr = nullptr;

	system("pause");
	return 0;
}

void printPtr(const string & ptrName, const int * const ptr)
{
	cout << ptrName << " = " << ptr << endl;
}

void printPtrValue(const string & ptrName, const int * const ptr)
{
	cout << ptrName << " = " << *ptr << endl;
}

void changeValue(int * ptr)
{
	*ptr = 22;
}