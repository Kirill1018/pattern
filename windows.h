#pragma once
#include "unit.h"
class Windows : public Unit
{
public:
	virtual int getPrice() { return 10000; }
};