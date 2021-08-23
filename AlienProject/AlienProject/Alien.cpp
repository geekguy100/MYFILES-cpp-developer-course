#include "Alien.h"
#include <ctime>
#include <cstdlib>

Alien::Alien(int weight, int height, char gender)
	: weight{weight}, height{height}, gender{gender}
{
	if (gender != 'M' && gender != 'F')
		gender = 'M';

	setGenderPoints();
}

// Private Mutator
// Prereq: Must set gender before calling.
void Alien::setGenderPoints()
{
	if (gender == 'M')
		genderPoints = 2;
	else
		genderPoints = 3;
}


// Accessors

int Alien::getWeight() const noexcept
{
	return weight;
}

int Alien::getHeight() const noexcept
{
	return height;
}

char Alien::getGender() const noexcept
{
	return gender;
}

int Alien::getPrestige() const noexcept
{
	return height * weight * genderPoints;
}



// Overloaded operators

bool Alien::operator==(const Alien & other) const noexcept
{
	return this->getPrestige() == other.getPrestige();
}

bool Alien::operator!=(const Alien & other) const noexcept
{
	return this->getPrestige() != other.getPrestige();
}

bool Alien::operator>(const Alien & other) const noexcept
{
	return this->getPrestige() > other.getPrestige();
}

bool Alien::operator>=(const Alien & other) const noexcept
{
	return this->getPrestige() >= other.getPrestige();
}

bool Alien::operator<(const Alien & other) const noexcept
{
	return this->getPrestige() < other.getPrestige();
}

bool Alien::operator<=(const Alien & other) const noexcept
{
	return this->getPrestige() <= other.getPrestige();
}

void Alien::operator=(const Alien & other) noexcept
{
	this->weight = other.weight;
	this->height = other.height;
	this->gender = other.gender;
	this->genderPoints = other.genderPoints;
}

Alien Alien::operator+(const Alien & other) noexcept
{
	int weightSum{ this->weight + other.weight };
	int heightSum{ this->height + other.height };
	char gender;

	srand(time(nullptr));
	int r{ (rand() % 10) + 1 }; // Generate a random number between [1, 10].

	// 30% chance to be a female.
	// 70% chance to be a male.
	if (r < 4)
		gender = 'F';
	else
		gender = 'M';

	Alien newAlien{ weightSum / 2, heightSum / 2, gender };
	return newAlien;
}

std::ostream & operator<<(std::ostream & stream, const Alien & alien) noexcept
{
	stream << "Alien Details:" << std::endl
		<< "\tWeight: " << alien.weight << std::endl
		<< "\tHeight: " << alien.height << std::endl
		<< "\tGender: " << alien.gender << std::endl
		<< "\tPrestige: " << alien.getPrestige() << std::endl;

	return stream;
}