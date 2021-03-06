#include <iostream>
using namespace std;

#include "CP_TimeByClock.h"

// 吴海隽 Hoichun Ng
// 清华大学软件学院
// School of Software, Tsinghua University, Beijing, China

void CP_TimeByClock::getStrt()
{
	strt = clock();
	return;
}

void CP_TimeByClock::getEnd()
{
	end = clock();
	return;
}

void CP_TimeByClock::printIntv()
{
	clock_t result;
	result = end - strt;
	double sec;
	sec = (double)(result) / CLOCKS_PER_SEC;
	if (sec >= 3600)
		cout << "Time spent is " << sec / 3600 << " hour(s)" << endl;
	else if (sec >= 60)
		cout << "Time spent is " << sec / 60 << " minite(s)" << endl;
	else if (sec >= 1)
		cout << "Time spent is " << sec << " second(s)" << endl;
	else
		cout << "Time spent is " << 1000 * sec << " millisecond(s)" << endl;
	return;
}
