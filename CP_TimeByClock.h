#ifndef CP_TIMEBYCLOCK_H
#define CP_TIMEBYCLOCK_H
#include <ctime>

class CP_TimeByClock
{
private:
	clock_t strt, end;

public:
	CP_TimeByClock() { strt = clock(); end = strt; }
	~CP_TimeByClock() {};
	void getStrt();
	void getEnd();
	void printIntv();

};

#endif 
