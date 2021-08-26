#include <iostream>
#include "ArrayList.h"
#include <string>
using namespace std;

void listTester(ArrayList<int> & list);
int main()
{
	ArrayList<string> myStringList;
	ArrayList<int> myList;

	listTester(myList);

	cout << endl;
	system("pause");
	return 0;
}

void listTester(ArrayList<int> & list)
{
	const int NUMS_TO_ADD{ 16 };

	cout << "------INITIAL LIST POPULATION------" << endl;
	cout << "Adding " << NUMS_TO_ADD << " integers to the list..." << endl;

	for (int i{}; i < NUMS_TO_ADD; ++i)
		list.add(i);
	cout << "Printing list..." << endl;
	list.printList();

	cout << endl;
	cout << "------CONTAINS() METHOD------" << endl;
	cout << "List contains 5?: " << boolalpha << list.contains(5) << endl;

	cout << endl << "------REMOVE() METHOD------" << endl;
	cout << "Trying to remove element at index 15..." << endl;
	try
	{
		list.remove(15);
	}
	catch (const out_of_range & err)
	{
		cerr << "Out of range: " << err.what() << endl;
	}
	cout << "Trying to remove element at index 12..." << endl;
	try
	{
		list.remove(12);
	}
	catch (const out_of_range & err)
	{
		cerr << "Out of range: " << err.what() << endl;
	}
	cout << "Printing list..." << endl;
	list.printList();

	cout << endl;
	cout << "------ADDING TO THE LIST------" << endl;
	cout << "Adding more integers..." << endl;
	list.add(-12);
	cout << "Tried adding -12..." << endl;
	list.add(-99);
	cout << "Tried adding -99..." << endl;
	list.add(-20);
	cout << "Tried adding -20..." << endl;
	list.add(120);
	cout << "Tried adding 120..." << endl;

	cout << endl << "------SET() METHOD------" << endl;
	cout << "Setting elem at index 6 to -1..." << endl;
	list.set(-1, 6);

	cout << endl << "------ADD(entry, pos) METHOD------" << endl;
	list.add(999, 7);

	cout << "Printing list..." << endl;
	list.printList();
}