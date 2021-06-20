#include "House.h"
#include <iostream>
using namespace std;

House::House()
{
	this->numStories = 1;
	this->numWindows = 4;
	this->color = "white";
	this->name = "Unnamed House";
}

House::House(string name, int numStories, int numWindows, string color)
{
	this->name = name;
	this->numStories = numStories;
	this->numWindows = numWindows;
	this->color = color;
}

House::~House()
{
	cout << getName() 
		<< " with " 
		<< numStories << " stories and " 
		<< numWindows << " windows is being destroyed!" 
		<< endl;
}

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
