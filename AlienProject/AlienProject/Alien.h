#ifndef ALIEN_H
#define ALIEN_H
#include <iostream>

class Alien
{
	friend std::ostream & operator<< (std::ostream & stream, const Alien & alien) noexcept;

public:
	Alien(int weight, int height, char gender);

	// Accessors
	int getWeight() const noexcept;
	int getHeight() const noexcept;
	char getGender() const noexcept;
	int getPrestige() const noexcept;

	// Overloaded operators
	bool operator== (const Alien & other) const noexcept;
	bool operator!= (const Alien & other) const noexcept;

	bool operator> (const Alien & other) const noexcept;
	bool operator>= (const Alien & other) const noexcept;
	bool operator< (const Alien & other) const noexcept;
	bool operator<= (const Alien & other) const noexcept;

	void operator= (const Alien & other) noexcept;
	Alien operator+ (const Alien & other) noexcept;

private:
	int weight;
	int height;
	char gender;
	int genderPoints;
	void setGenderPoints();
};

#endif