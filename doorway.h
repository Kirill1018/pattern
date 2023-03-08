#pragma once
#include "unit.h"
class Doorway : public Unit
{
public:
	virtual int getPrice() { return 3000; }
};