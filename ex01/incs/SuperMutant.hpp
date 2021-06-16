#pragma once
#include <iostream>

class SuperMutant
{
public:
	SuperMutant();
	//SuperMutant();
	SuperMutant(SuperMutant const &toCopy);
	~SuperMutant();
	SuperMutant &	operator = (const SuperMutant & toCopy);

protected:

private:

};

std::ostream & operator << (std::ostream & stream, const SuperMutant &SuperMutant);
