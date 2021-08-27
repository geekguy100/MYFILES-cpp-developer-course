#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{
public:
	Node(const T & elem, Node* next = nullptr)
		:_elem{ elem }, _next{ next }
	{
	}

	// Accessors
	Node* getNext() const
	{
		return _next;
	}

	T getElem() const
	{
		return _elem;
	}

	// Mutators
	void setElement(const T & elem)
	{
		_elem = elem;
	}

	void setNext(Node* next)
	{
		_next = next;
	}

private:
	Node * _next;
	T _elem;
};

#endif // !NODE_H
