#pragma once
#include <iostream>

class RadScorpion
{
public:
	RadScorpion();
	//RadScorpion();
	RadScorpion(RadScorpion const &toCopy);
	~RadScorpion();
	RadScorpion &	operator = (const RadScorpion & toCopy);

protected:

private:

};

std::ostream & operator << (std::ostream & stream, const RadScorpion &RadScorpion);
