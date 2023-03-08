#pragma once
#include "_wall.h"
#include "base.h"
#include "doorway.h"
#include "housetop.h"
#include "windows.h"
class CompositeUnit : public Unit
{
public:
	int getPrice()
	{
		int total = 0;//полная цена
		for (int i = 0; i < composite.size(); ++i)
			total += composite[i]->getPrice();
		return total;
	}
	void addUnit(Unit* unit) { composite.push_back(unit); }
	~CompositeUnit()
	{
		for (int i = 0; i < composite.size(); ++i)
			delete composite[i];
	}
private:
	vector<Unit*> composite;
};