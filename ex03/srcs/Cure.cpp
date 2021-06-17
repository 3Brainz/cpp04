#include <Cure.hpp>

Cure::Cure()
{
	std::cout << "Cure created" << std::endl;
}

//Cure::Cure()
//{
//	std::cout << Cure created << std::endl;
//}

Cure::~Cure()
{
}

Cure::Cure(Cure const &toCopy)
{
}

Cure &	Cure::operator = (const Cure & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const Cure &Cure)
{
	return (stream);
}
