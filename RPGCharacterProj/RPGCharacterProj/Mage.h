#ifndef MAGE_H
#define MAGE_H

#include "Player.h"
#include <string>

class Mage : public Player
{
public:
	Mage(const std::string & name, Race race, int hitPoints, int magicPoints);

	std::string attack() const noexcept;
	std::string getClass() const noexcept;
};


#endif // !MAGE_H
