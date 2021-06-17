#include <IMateriaSource.hpp>

IMateriaSource::IMateriaSource()
{
	std::cout << "IMateriaSource created" << std::endl;
}

//IMateriaSource::IMateriaSource()
//{
//	std::cout << IMateriaSource created << std::endl;
//}

IMateriaSource::~IMateriaSource()
{
}

IMateriaSource::IMateriaSource(IMateriaSource const &toCopy)
{
}

IMateriaSource &	IMateriaSource::operator = (const IMateriaSource & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const IMateriaSource &IMateriaSource)
{
	return (stream);
}
