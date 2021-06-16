#include <PowerFist.hpp>

PowerFist::PowerFist()
{
	std::cout << "PowerFist created" << std::endl
}

//PowerFist::PowerFist()
//{
//	std::cout << PowerFist created << std::endl
//}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const &toCopy)
{
}

PowerFist &	PowerFist::operator = (const PowerFist & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const PowerFist &PowerFist)
{
	return (stream);
}
