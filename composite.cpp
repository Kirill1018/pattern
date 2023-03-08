#include "unit.h"
#include "comp unit.h"
CompositeUnit* createFirstTypeOfHouse()
{
	CompositeUnit* FirstTypeOfHouse = new CompositeUnit;
	for (int i = 0; i < 3; ++i)
		FirstTypeOfHouse->addUnit(new _wall);
	FirstTypeOfHouse->addUnit(new Base);
	for (int i = 0; i < 3; ++i)
		FirstTypeOfHouse->addUnit(new Doorway);
	for (int i = 0; i < 3; ++i)
		FirstTypeOfHouse->addUnit(new Windows);
	return FirstTypeOfHouse;
}
CompositeUnit* createSecTypeOfHouse()
{
	CompositeUnit* SecTypeOfHouse = new CompositeUnit;
	for (int i = 0; i < 6; ++i)
		SecTypeOfHouse->addUnit(new _wall);
	for (int i = 0; i < 1; ++i)
		SecTypeOfHouse->addUnit(new Base);
	for (int i = 0; i < 1; ++i)
		SecTypeOfHouse->addUnit(new Doorway);
	for (int i = 0; i < 3; ++i)
		SecTypeOfHouse->addUnit(new Windows);
	return SecTypeOfHouse;
}
void main()
{
	setlocale(LC_ALL, "ru");
	CompositeUnit* area = new CompositeUnit;
	area->addUnit(createFirstTypeOfHouse());
	for (int i = 0; i < 1; ++i)
		area->addUnit(createSecTypeOfHouse());
	SetColor(1, 0);
	cout << "стоимость участка, состоящего из 3 домов 2 типов = " << area->getPrice() << endl;
	delete area;
}