#pragma once
#include "unit.h"
class Base : public Unit
{
public:
	virtual int getPrice() { return 6000; }
};