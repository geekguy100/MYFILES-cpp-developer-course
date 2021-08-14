#ifndef PRIEST_H
#define PRIEST_H

#include "Player.h"
#include <string>

class Priest : public Player
{
public:
	Priest(const std::string & name, Race race, int hitPoints, int magicPoints);

	std::string attack() const noexcept;
	std::string getClass() const noexcept;
};


#endif // !PRIEST_H
