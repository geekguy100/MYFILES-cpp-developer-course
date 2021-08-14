#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
public:
	enum Race { HUMAN, ELF, DWARF, ORC, TROLL };
	Player(const std::string & name, Race race, int hitPoints, int magicPoints);

	std::string getName() const noexcept;
	std::string getRace() const noexcept;
	Race getRaceValue() const noexcept;
	int getHitPoints() const noexcept;
	int getMagicPoints() const noexcept;

	void setName(const std::string & name) noexcept;
	void setRace(Race race) noexcept;
	void setHitPoints(int hitPoints) noexcept;
	void setMagicPoints(int magicPoints) noexcept;

	virtual std::string attack() const noexcept = 0;
	virtual std::string getClass() const noexcept = 0;

private:
	std::string name;
	Race race;
	int hitPoints;
	int magicPoints;
};


#endif