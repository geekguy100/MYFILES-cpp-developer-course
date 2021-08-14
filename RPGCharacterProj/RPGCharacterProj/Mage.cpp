#include "Mage.h"

Mage::Mage(const std::string & name, Race race, int hitPoints, int magicPoints)
	:Player{name, race, hitPoints, magicPoints}
{}

std::string Mage::attack() const noexcept
{
	return "I will crush you with the power of my arcane missiles!";
}

std::string Mage::getClass() const noexcept
{
	return "Mage";
}
