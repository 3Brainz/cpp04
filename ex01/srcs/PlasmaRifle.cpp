#include <PlasmaRifle.hpp>

PlasmaRifle::PlasmaRifle()
{
	std::cout << "PlasmaRifle created" << std::endl
}

//PlasmaRifle::PlasmaRifle()
//{
//	std::cout << PlasmaRifle created << std::endl
//}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &toCopy)
{
}

PlasmaRifle &	PlasmaRifle::operator = (const PlasmaRifle & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const PlasmaRifle &PlasmaRifle)
{
	return (stream);
}
