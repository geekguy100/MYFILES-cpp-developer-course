#include <iostream>
#include <string>
#include "House.h"
using namespace std;

void printHouseData(const House & house);
int main()
{
	House myHouse;
	House yourHouse;
	House otherHouse("Eddie's House", 12, 100, "black");

	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColor("red");
	myHouse.setName("Kyle's House");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);
	yourHouse.setColor("green");
	yourHouse.setName("Steven's House");

	//printHouseData(myHouse);
	//printHouseData(yourHouse);
	myHouse.print();
	yourHouse.print();
	otherHouse.print();


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