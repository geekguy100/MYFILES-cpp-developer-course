#include "Warrior.h"

Warrior::Warrior(const std::string & name, Race race, int hitPoints, int magicPoints)
	:Player{ name, race, hitPoints, magicPoints }
{}

std::string Warrior::attack() const noexcept
{
	return "I will destroy you with my sword, foul demon!";
}

std::string Warrior::getClass() const noexcept
{
	return "Warrior";
}
