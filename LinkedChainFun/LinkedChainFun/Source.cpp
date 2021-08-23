#include <iostream>
#include "Node.h"

using namespace std;

Node<int>* createChain();
template <class T>
void destroyChain(Node<T>* &head);
template <class T>
void printChain(Node<T>* const & head);
int main()
{
	Node<int>* head;
	head = createChain();

	printChain(head);
	destroyChain(head);

	cout << endl;
	system("pause");
	return 0;
}

Node<int>* createChain()
{
	Node<int> * head = nullptr;
	for (int i{}; i < 25; ++i)
	{
		head = new Node<int>(i, head);
	}

	return head;
}

template <class T>
void destroyChain(Node<T>* &head)
{
	while (head != nullptr)
	{
		Node<T> * nodeToDestroy{ head };
		head = head->getNext();
		delete nodeToDestroy;
	}
}

template <class T>
void printChain(Node<T>* const & head)
{
	Node<T> * currentNode{ head };
	int count{};
	while (currentNode != nullptr)
	{
		cout << currentNode->getData() << endl;
		currentNode = currentNode->getNext();
		++count;
	}

	cout << "Walked through " << count << " elements in the linked chain." << endl;
}