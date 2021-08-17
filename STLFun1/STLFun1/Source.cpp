#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int> & deque);
int main()
{
	deque<int> myDeque;
	myDeque.push_back(1);
	myDeque.push_back(5);
	myDeque.push_back(10);

	cout << "First Print: " << endl;
	printDeque(myDeque);

	myDeque.push_front(30);

	cout << "Second Print: " << endl;
	printDeque(myDeque);

	system("pause");
	return 0;
}

void printDeque(const deque<int> & deque)
{
	for (int i : deque)
		cout << i << endl;

	cout << endl;
}