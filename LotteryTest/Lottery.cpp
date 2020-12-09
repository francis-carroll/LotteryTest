#include "Lottery.h"

bool Lottery::checkInRange(int t_number)
{
	if (t_number >= 0 && t_number < 46)
	{
		return true;
    }
	return false;
}
