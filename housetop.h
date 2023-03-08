#pragma once
#include "unit.h"
class Housetop : public Unit
{
public:
	virtual int getPrice() { return 1000; }
};