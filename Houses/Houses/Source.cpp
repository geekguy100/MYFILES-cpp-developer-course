#include <iostream>
#include <string>
using namespace std;

class House
{
public:

	// Below are our setters.
	void setNumStories(int numStories)
	{
		this->numStories = numStories;
	}

	void setNumWindows(int numWindows)
	{
		this->numWindows = numWindows;
	}

	void setColor(string color)
	{
		this->color = color;
	}

	void setName(string name)
	{
		this->name = name;
	}

	// Below are our getters.
	int getNumStories() const
	{
		return numStories;
	}

	int getNumWindows() const
	{
		return numWindows;
	}

	string getColor() const
	{
		return color;
	}

	string getName() const
	{
		return name;
	}


private:
	int numStories;
	int numWindows;
	string color;
	string name;


}; // end of class named House

void printHouseData(const House & house);
int main()
{
	House myHouse;
	House yourHouse;

	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColor("red");
	myHouse.setName("Kyle's House");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);
	yourHouse.setColor("green");
	yourHouse.setName("Steven's House");

	printHouseData(myHouse);

	printHouseData(yourHouse);


	cout << endl << endl;
	system("pause");
	return 0;
}


// By creating this function, we are refactoring our code,
// replacing a repeated asset with its own function, and promoting
// software reuse!
void printHouseData(const House & house)
{
	cout << house.getName() << " is painted " << house.getColor()
		<< " and has " << house.getNumStories()
		<< " stories with " << house.getNumWindows() << " windows." << endl;
}