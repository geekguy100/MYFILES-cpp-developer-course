#ifndef HOUSE_H
#define HOUSE_H

#include <string>

using namespace std;

class House
{
public:

	House();
	House(string name, int numStories, int numWindows, string color);
	~House();

	// Below are our setters.
	void setNumStories(int numStories);
	void setNumWindows(int numWindows);
	void setColor(string color);
	void setName(string name);

	// Below are our getters.
	int getNumStories() const;
	int getNumWindows() const;
	string getColor() const;
	string getName() const;

	void print() const;


private:
	int numStories;
	int numWindows;
	string color;
	string name;


}; // end of class named House
#endif