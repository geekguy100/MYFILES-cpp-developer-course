#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
public:
	Animal(std::string const & name, double weight);

	std::string getName() const noexcept;
	double getWeight() const noexcept;

	void setName(std::string const & name) noexcept;
	void setWeight(double weight) noexcept;

	virtual std::string makeNoise() const noexcept = 0;
	virtual std::string eat() const noexcept = 0;


private:
	std::string name;
	double weight;
};


#endif // !ANIMAL_H
