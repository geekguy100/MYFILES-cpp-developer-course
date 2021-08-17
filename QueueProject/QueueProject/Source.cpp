#include <iostream>
#include <queue>
#include <string>

using namespace std;

void leaveQueue(queue<string> & queue);
void fillQueue(queue<string> & queue);
int main()
{
	queue<string> groceryStoreQueue;
	fillQueue(groceryStoreQueue);
	cout << endl;
	leaveQueue(groceryStoreQueue);


	system("pause");
	return 0;
}

void leaveQueue(queue<string> & queue)
{
	while (!queue.empty())
	{
		cout << queue.front() << " is in the front. Removing..." << endl;
		string name{ queue.front() };
		queue.pop();
	}
}

void fillQueue(queue<string> & queue)
{
	string names[]{"Kyle", "John", "Steven", "Olivia", "Dad", "Tyler"};
	for (string & name : names)
	{
		cout << name << " has been added to the queue" << endl;
		queue.push(name);
	}

	cout << "--->" << queue.front() << " is at the front of the queue." << endl;
}