#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : _type("generic wrong")
{
	std::cout << _type << "is a WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << _type << " is a WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &toCopy)
{
	_type = toCopy.getType();
}

WrongAnimal &	WrongAnimal::operator = (const WrongAnimal & toCopy)
{
	if (this != &toCopy)
	{
		_type = toCopy.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << _type << " dismissed wrong" << std::endl;
}

/*getters*/

std::string	WrongAnimal::getType(void) const
{
	return(_type);
}

/*setters*/

void		WrongAnimal::setType(std::string const & type)
{
	_type = type;
}

/*methods*/

void		WrongAnimal::makeSound(void)
{
	std::cout << "silence" << std::endl;
	//to override
}