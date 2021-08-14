#include "Priest.h"

Priest::Priest(const std::string & name, Race race, int hitPoints, int magicPoints)
	:Player{ name, race, hitPoints, magicPoints }
{}

std::string Priest::attack() const noexcept
{
	return "I will assult you with my Holy Wrath!";
}

std::string Priest::getClass() const noexcept
{
	return "Priest";
}
