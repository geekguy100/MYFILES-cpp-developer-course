#include <iostream>
#include <string>

using namespace std;

void printPtr(const string & ptrName, const int * const ptr) noexcept;
void printPtrValue(const string & ptrName, const int * const ptr) noexcept;
void changeValue(int * ptr) noexcept;

int * createDanglingPointer() noexcept;
int * createPointer() noexcept;

int main() noexcept
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


	cout << "Setting myIntPtr = nullptr..." << endl;
	//myIntPtr = nullptr;
	
	cout << "Should print 00000000, but program crashes when I try to print the value." << endl;
	cout << "Verified by creating a dynamically allocated integer initialized to nullptr, and printing that out to the console." << endl;
	//printPtr("myIntPtr", myIntPtr);
	//printPtrValue("myIntPtr", myIntPtr);
	cout << endl;

	cout << "Calling the delete operator on myIntPtr..." << endl;
	delete myIntPtr;

	cout << "Program crashes if I try to print the value to the console." << endl;
	//printPtr("myIntPtr", myIntPtr);
	//printPtrValue("myIntPtr", myIntPtr);
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~" << endl << endl;


	cout << "Calling createDanglingPointer()..." << endl;
	int * myDanglingPtr = createDanglingPointer();
	printPtr("myDanglingPtr", myDanglingPtr);
	printPtrValue("myDanglingPtr", myDanglingPtr);

	cout << "Calling createPointer()..." << endl;
	int * myPtr = createPointer();
	printPtr("myPtr", myPtr);
	printPtrValue("myPtr", myPtr);

	cout << endl << "!!!" << endl;
	cout << "Notice how if we dynamically allocate memory for our integer, it can exist outside of the function it is declared in!" << endl;
	cout << "However, if we only create it locally (i.e. on the Stack), its memory will be released once it goes out of scope, EVEN if we return a reference to it." << endl;

	delete myPtr;

	myDanglingPtr = nullptr;
	myPtr = nullptr;


	cout << endl << endl;
	system("pause");
	return 0;
}

void printPtr(const string & ptrName, const int * const ptr) noexcept
{
	cout << ptrName << " = " << ptr << endl;
}

void printPtrValue(const string & ptrName, const int * const ptr) noexcept
{
	cout << ptrName << " = " << *ptr << endl;
}

void changeValue(int * ptr) noexcept
{
	*ptr = 22;
}

int * createDanglingPointer() noexcept
{
	cout << "Inside of createDanglingPtr(), we are creating an integer initialized with the value 1217." << endl;
	cout << "We are NOT dyamically allocating memory for this integer. Instead, we are returning its reference." << endl << endl;
	cout << "---------------\nint randomInt = 1217;" << endl << "return &randomInt;\n---------------" << endl << endl;
	int randomInt = 1217;
	return &randomInt;
}

int * createPointer() noexcept
{
	cout << "Inside of createPointer(), we are creating an integer by dynamically allocating memory for it on the heap." << endl << endl;
	cout << "---------------\nint * randomInt = new int(1217);" << endl << "return randomInt;\n---------------" << endl << endl;
	int * randomInt = new int{ 1217 };
	return randomInt;
}