#pragma once
#include <iostream>
#include <ISpaceMarine.hpp>

class ISquad
{
public:
	virtual ~ISquad() {};
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int nu) const = 0;
	virtual int push(ISpaceMarine *marine) = 0;
};
