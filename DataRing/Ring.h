#pragma once
#include "standard.h"
#include "Cell.h"
#include <vector>
#include <windows.h>

class Ring
{
public:
	Ring();
	~Ring();
	void Start();
	void Stop();
	enum RingStatus
	{
		BOOTING,
		STARTED,
		RUNNING,
		STOPPED
	};
private:
	RingStatus status;
	vector<Cell> cells;
	int sleepTime_ms = 200;
};

