#ifndef CP_TIMEBYCLOCK_H
#define CP_TIMEBYCLOCK_H
#include <ctime>

// 吴海隽 Hoichun Ng
// 清华大学软件学院
// School of Software, Tsinghua University, Beijing, China

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
