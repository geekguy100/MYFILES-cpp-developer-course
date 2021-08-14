#ifndef SWAPPER_H
#define SWAPPER_H

// Specification
template<class T>
class Swapper
{
public:
	Swapper(const T & first, const T & second);
	void swap();

	T getFirst();
	T getSecond();
private:
	T first;
	T second;
};
#endif


// Implementation

template<class T>
Swapper<T>::Swapper(const T & first, const T & second)
	:first{ first }, second{ second }
{}

template<class T>
void Swapper<T>::swap()
{
	T temp{ first };
	first = second;
	second = temp;
}

template<class T>
T Swapper<T>::getFirst()
{
	return first;
}

template<class T>
T Swapper<T>::getSecond()
{
	return second;
}