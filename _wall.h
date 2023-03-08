#pragma once
#include "unit.h"
class _wall : public Unit
{
public:
	virtual int getPrice() { return 80000; }
};