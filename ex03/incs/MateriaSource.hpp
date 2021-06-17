#pragma once
#include <iostream>

class MateriaSource
{
public:
	MateriaSource();
	//MateriaSource();
	MateriaSource(MateriaSource const &toCopy);
	~MateriaSource();
	MateriaSource &	operator = (const MateriaSource & toCopy);

protected:

private:

};

std::ostream & operator << (std::ostream & stream, const MateriaSource &MateriaSource);
