#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"
#include <string>

class Warrior : public Player
{
public:
	Warrior(const std::string & name, Race race, int hitPoints, int magicPoints);

	std::string attack() const noexcept;
	std::string getClass() const noexcept;
};


#endif // !WARRIOR_H
