#include <RadScorpion.hpp>

RadScorpion::RadScorpion()
{
	std::cout << "RadScorpion created" << std::endl
}

//RadScorpion::RadScorpion()
//{
//	std::cout << RadScorpion created << std::endl
//}

RadScorpion::~RadScorpion()
{
}

RadScorpion::RadScorpion(RadScorpion const &toCopy)
{
}

RadScorpion &	RadScorpion::operator = (const RadScorpion & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const RadScorpion &RadScorpion)
{
	return (stream);
}
