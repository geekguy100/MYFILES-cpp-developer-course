#ifndef LIST_H
#define LIST_H

template <class T>
class List
{
public:
	virtual void add(T newEntry) = 0;
	virtual void add(T newEntry, int position) = 0;
	virtual void set(T newEntry, int position) = 0;

	virtual bool contains(T entry) const = 0;
	virtual int find(T entry) const = 0;
	virtual T remove(int position) = 0;
	virtual void makeEmpty() = 0;

	virtual int size() const = 0;
	virtual bool isEmpty() const = 0;
	virtual void printList() const = 0;
};

#endif // !LIST_H