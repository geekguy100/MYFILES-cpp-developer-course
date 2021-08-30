#include <iostream>
#include "ArrayStack.h"
#include "data_structure_empty.h"
using namespace std;

int main()
{
	ArrayStack<int> myStack;
	myStack.push(12);
	myStack.push(99);
	cout << myStack;

	//for (int i{}; i < 16; ++i)
	//{
	//	try
	//	{
	//		myStack.push(i);
	//	}
	//	catch (exception const & e)
	//	{
	//		cerr << e.what() << endl;
	//	}
	//}

	//myStack.printStack();
	//myStack.pop();
	//myStack.printStack();



	cout << endl;
	system("pause");
	return 0;
}