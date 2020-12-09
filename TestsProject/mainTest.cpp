#include <iostream>
#include <assert.h>

#include "../LotteryTest/Lottery.h"

using namespace std;

int main()
{
	Lottery* lottery = new Lottery;
	assert(lottery->checkInRange(2) == true);
	assert(lottery->checkInRange(-1) == false);
}