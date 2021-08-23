#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{
public:
	Node(T data, Node * next)
		:data{ data }, next{ next }
	{}

	void setData(T data) noexcept
	{
		this->data = data;
	}

	void setNext(Node * next) noexcept
	{
		delete next;
		this->next = next;
	}

	T getData() const noexcept
	{
		return this->data;
	}

	Node* getNext() const noexcept
	{
		return this->next;
	}

private:
	T data;
	Node * next;
};
#endif