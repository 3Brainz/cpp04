#include <MateriaSource.hpp>

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource created" << std::endl;
}

//MateriaSource::MateriaSource()
//{
//	std::cout << MateriaSource created << std::endl;
//}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const &toCopy)
{
}

MateriaSource &	MateriaSource::operator = (const MateriaSource & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const MateriaSource &MateriaSource)
{
	return (stream);
}
