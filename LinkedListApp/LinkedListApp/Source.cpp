#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

int main()
{
	LinkedList<int> myList;
	myList.add(12);
	myList.add(120);
	cout << "Watch here..." << endl;
	myList.add(99, 2);

	myList.printList();

	cout << endl;
	system("pause");
	return 0;
}