#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include "Stack.h"
#include "data_structure_empty.h"
#include <iostream>

template <class T>
class ArrayStack : public Stack<T>
{
	friend std::ostream & operator<<(std::ostream & os, const ArrayStack<T> & as)
	{
		for (int i{ as._top }; i >= 0; --i)
		{
			os << as._array[i] << std::endl;
		}

		return os;
	}

public:
	ArrayStack(int maxSize = 16)
		: MAX_SIZE{maxSize}, _array{new T[maxSize]}, _top{-1}
	{
	}

	~ArrayStack()
	{
		makeEmpty();
		delete[] _array;
	}

	virtual void push(const T & entry) throw(...)
	{
		if (_top < MAX_SIZE - 1)
		{
			_top++;
			_array[_top] = entry;
		}
		else
			throw std::overflow_error("Stack is full");
	}

	virtual T pop() throw(...)
	{
		if (!isEmpty())
		{
			T elem{ _array[_top] };
			--_top;

			return elem;
		}
		else
			throw data_structure_empty("Stack is empty");
	}

	virtual T peek() const throw(...)
	{
		if (isEmpty())
			throw data_structure_empty("Stack is empty");
		else
			return _array[_top];
	}

	virtual bool isEmpty() const
	{
		return _top < 0;
	}

	virtual void makeEmpty()
	{
		_top = -1;
	}

	virtual void printStack() const
	{
		std::cout << "Printing Stack:" << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		for (int i{_top}; i >= 0; --i)
			std::cout << _array[i] << std::endl;

		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	}

private:
	T* _array;
	const int MAX_SIZE;
	int _top;

	bool isFull()
	{
		return _top >= MAX_SIZE - 1;
	}
};

#endif // !ARRAY_STACK_H
