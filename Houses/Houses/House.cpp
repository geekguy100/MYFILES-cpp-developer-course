#include "House.h"
#include <iostream>
using namespace std;

void House::setNumStories(int numStories)
{
	this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
	this->numWindows = numWindows;
}

void House::setColor(string color)
{
	this->color = color;
}

void House::setName(string name)
{
	this->name = name;
}

// Below are our getters.
int House::getNumStories() const
{
	return numStories;
}

int House::getNumWindows() const
{
	return numWindows;
}

string House::getColor() const
{
	return color;
}

string House::getName() const
{
	return name;
}

void House::print() const
{
	cout << getName() << " is painted " << getColor()
		<< " and has " << getNumStories()
		<< " stories with " << getNumWindows() << " windows." << endl;
}
