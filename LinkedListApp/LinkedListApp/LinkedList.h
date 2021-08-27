#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "List.h"
#include "Node.h"
#include <iostream>

template <class T>
class LinkedList : public List<T>
{
public:
	LinkedList()
		:head{ nullptr }, _numElements{ 0 }
	{
	}

	virtual ~LinkedList()
	{
		makeEmpty();
	}

	void add(T newEntry)
	{
		Node<T>* nextNode{ new Node<T>{newEntry, head} };
		head = nextNode;

		++_numElements;
	}

	void add(T newEntry, int position)
	{
		if (position >= _numElements + 1 || position < 0)
			throw std::out_of_range("Cannot access position out of range.");
		else
		{
			if (position == 0)
			{
				Node<T>* newNode{ new Node<T>{newEntry, head} };
				head = newNode;
			}
			else
			{
				Node<T>* previousNode{ head };
				for (int i{}; i < position - 1; ++i)
					previousNode = previousNode->getNext();// Wouldn't this just be modifying 'head'?

				previousNode->setNext(new Node<T>{ newEntry, previousNode->getNext() });
			}

			++_numElements;
		}
	}

	void set(T newEntry, int position)
	{
		if (position >= _numElements || position < 0)
			throw std::out_of_range("Cannot access an element out of range.");
		else // Do I need 'else' here, or will it return from the method?
		{
			Node<T>* node{ head };
			for (int i{}; i < position; ++i)
				node = node->getNext();

			node->setElement(newEntry);
		}
	}

	bool contains(T entry) const
	{
		return find(entry) != -1;
	}

	int find(T entry) const
	{
		Node<T>* currentNode{ head };
		int index{};
		while (currentNode != nullptr)
		{
			if (currentNode->getElem() == entry)
				return index;

			++index;
			currentNode = currentNode->getNext();
		}

		return -1;
	}

	T remove(int position)
	{
		if (position >= _numElements || position < 0)
			throw std::out_of_range("Cannot remove an element outside of the list's range.");
		else
		{
			T dataToReturn{head->getElem()};

			if (position == 0)
			{
				Node<T>* afterHead{ head->getNext() };
				delete head;

				head = afterHead;
				return dataToReturn;
			}
			else
			{
				Node<T>* previousNode{ head };
				for (int i{}; i < position - 1; ++i)
					previousNode = previousNode->getNext();

				Node<T>* nodeToDelete{ previousNode->getNext() };
				previousNode->setNext(nodeToDelete->getNext());

				dataToReturn = nodeToDelete->getElem();
				delete nodeToDelete;
			}

			--_numElements;
			return dataToReturn;
		}
	}

	void makeEmpty()
	{
		if (isEmpty())
			return;

		Node<T>* currentNode{ head };
		Node<T>* nextNode{ nullptr };
		while (currentNode != nullptr)
		{
			nextNode = currentNode->getNext();

			delete currentNode;
			currentNode = nextNode;
		}

		_numElements = 0;
	}

	int size() const
	{
		return _numElements;
	}

	bool isEmpty() const
	{
		return _numElements == 0;
	}

	void printList() const
	{
		Node<T>* currentNode{ head };
		while (currentNode != nullptr)
		{
			std::cout << currentNode->getElem() << std::endl;
			currentNode = currentNode->getNext();
		}
	}

private:
	Node<T>* head;
	int _numElements;
};

#endif