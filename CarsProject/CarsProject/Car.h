#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
public:
	Car(const std::string & color, int numDoors);

	std::string getColor() const noexcept;
	int getNumDoors() const noexcept;
private:
	std::string color;
	int numDoors;
};


#endif // !CAR_H
