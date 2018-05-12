#include "Ring.h"

Ring::Ring(){
	this->status = RingStatus::BOOTING;
}


Ring::~Ring(){}

void Ring::Start(){
	this->status = RingStatus::STARTED;
	int i = 0;
	while (this->status != RingStatus::STOPPED) {
		++i;
		cout << "Round " << i << ", can you stop me ?" << endl;

		Sleep(this->sleepTime_ms);
	}
}

void Ring::Stop(){
	this->status = RingStatus::STOPPED;
}
