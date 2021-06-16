#include <SuperMutant.hpp>

SuperMutant::SuperMutant()
{
	std::cout << "SuperMutant created" << std::endl
}

//SuperMutant::SuperMutant()
//{
//	std::cout << SuperMutant created << std::endl
//}

SuperMutant::~SuperMutant()
{
}

SuperMutant::SuperMutant(SuperMutant const &toCopy)
{
}

SuperMutant &	SuperMutant::operator = (const SuperMutant & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const SuperMutant &SuperMutant)
{
	return (stream);
}
