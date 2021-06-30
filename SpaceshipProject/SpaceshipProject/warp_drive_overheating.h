#ifndef WARPDRIVEOVERHEATING_H
#define WARPDRIVEOVERHEATING_H

#include <stdexcept>

class warp_drive_overheating : public std::overflow_error
{
public:
	warp_drive_overheating()
		: std::overflow_error("Warp Drive has exceeded safe temperature tolerances.")
	{}

private:
};

#endif
