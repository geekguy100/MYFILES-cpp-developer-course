#include "Player.h"

Player::Player(const std::string & name, Race race, int hitPoints, int magicPoints)
	:name{ name }, race{ race }, hitPoints{ hitPoints }, magicPoints{ magicPoints }
{
}

std::string Player::getName() const noexcept
{
	return this->name;
}

std::string Player::getRace() const noexcept
{
	switch (this->race)
	{
	case Race::DWARF:
		return "Dwarf";
	case Race::ELF:
		return "Elf";
	case Race::HUMAN:
		return "Human";
	case Race::ORC:
		return "Orc";
	case Race::TROLL:
		return "Troll";
	default:
		return "ERROR";
	}
}

Player::Race Player::getRaceValue() const noexcept
{
	return this->race;
}

int Player::getHitPoints() const noexcept
{
	return this->hitPoints;
}

int Player::getMagicPoints() const noexcept
{
	return this->magicPoints;
}

int Player::getMaxClasses() noexcept
{
	return MAX_CLASSES;
}

void Player::setName(const std::string & name) noexcept
{
	this->name = name;
}

void Player::setRace(Race race) noexcept
{
	this->race = race;
}

void Player::setHitPoints(int hitPoints) noexcept
{
	this->hitPoints = hitPoints;
}

void Player::setMagicPoints(int magicPoints) noexcept
{
	this->magicPoints = magicPoints;
}
