#pragma once
#include "standard.h"
class Cell abstract
{
public:
	Cell();
	~Cell();
	virtual void recruit() = 0;
	virtual void evaluate() = 0;
	virtual void bind() = 0;
//private:
	//virtual Cell Bounded;
	//**Cell voters;
};

