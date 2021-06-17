#pragma once
#include <iostream>

class Cure
{
public:
	Cure();
	//Cure();
	Cure(Cure const &toCopy);
	~Cure();
	Cure &	operator = (const Cure & toCopy);

protected:

private:

};

std::ostream & operator << (std::ostream & stream, const Cure &Cure);
