#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include "List.h"

template <class T>
class ArrayList : public List<T>
{
public:
	ArrayList(int s = 16 )
		:MAX_SIZE{ s }, _numElements{ 0 }, _array{ new T[s] }
	{}

	~ArrayList()
	{
		delete[] _array;
	}

	void add(T newEntry)
	{
		if (isFull())
		{
			std::cerr << "Cannot add anymore elements. List is full." << std::endl;
			return;
		}

		_array[_numElements] = newEntry;
		_numElements++;
	}

	void add(T newEntry, int position)
	{
		// Cannot add element if array is full.
		if (isFull())
		{
			std::cerr << "Cannot add anymore elements. List is full." << std::endl;
			return;
		}
		// Cannot add element if position is out of bounds.
		else if (position < 0 || position > _numElements)
		{
			std::cerr << "Cannot add entry. Position is out of bounds." << std::endl;
			return;
		}

		for (int i = _numElements; i > position; --i)
		{
			_array[i] = _array[i - 1];
		}

		_array[position] = newEntry;
		_numElements++;
	}

	void set(T newEntry, int position)
	{
		if (position < 0 || position >= _numElements)
		{
			std::cerr << "Cannot set entry. Position is out of bounds." << std::endl;
			return;
		}

		_array[position] = newEntry;
	} 

	bool contains(T entry) const
	{
		if (isEmpty())
			return false;

		for (int i = 0; i < _numElements; ++i)
		{
			if (_array[i] == entry)
				return true;
		}

		return false;
	}

	int find(T entry) const
	{
		if (isEmpty())
			return -1;

		for (int i = 0; i < _numElements; ++i)
		{
			if (_array[i] == entry)
				return i;
		}

		return -1;
	}

	T remove(int position)
	{
		if (position < 0 || position > _numElements)
		{
			//std::cerr << "Cannot remove element. Position is out of bounds." << std::endl;
			throw std::out_of_range("Position is out of bounds.");
		}

		T value{ _array[position] };

		for (int i = position; i < _numElements - 1; ++i)
		{
			_array[i] = _array[i + 1];
		}

		// Have to put "numElements - 1" because what if we're trying to remove the last element in the array? 
		// Setting that last element's value to a value out of our allocated space could cause problems.
		// Instead, _numElements-- will make sure that that last value can no longer be accessed, so it doesn't even matter what it's set to!

		_numElements--;
		return value;
	}

	void makeEmpty()
	{
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
		for (int i = 0; i < _numElements; ++i)
			std::cout << _array[i] << std::endl;
	}

private:
	T * _array; // the array we'll be using
	const int MAX_SIZE; // capacity
	int _numElements; // number of elements in the list.

	bool isFull()
	{
		return _numElements >= MAX_SIZE;;
	}
};

#endif