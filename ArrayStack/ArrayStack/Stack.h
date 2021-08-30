#ifndef STACK_H
#define STACK_H

#include "data_structure_empty.h"
#include <iostream>
template<class T>
class Stack
{
public:
	virtual void push(const T & entry) throw(...) = 0;
	virtual T pop() throw(...) = 0;
	virtual T peek() const throw(...) = 0;
	virtual bool isEmpty() const = 0;
	virtual void makeEmpty() = 0;
	virtual void printStack() const = 0;
};

#endif // !STACK_H
