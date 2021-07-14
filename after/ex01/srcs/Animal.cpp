#include <Animal.hpp>

Animal::Animal() : _type("generic")
{
	std::cout << _type << "is an animal" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << _type << " is an animal" << std::endl;
}

Animal::Animal(Animal const &toCopy)
{
	_type = toCopy.getType();
}

Animal &	Animal::operator = (const Animal & toCopy)
{
	if (this != &toCopy)
	{
		_type = toCopy.getType();
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << _type << " dismissed" << std::endl;
}

/*getters*/

std::string	Animal::getType(void) const
{
	return(_type);
}

/*setters*/

void		Animal::setType(std::string const & type)
{
	_type = type;
}

/*methods*/

void		Animal::makeSound(void)
{
	//to override
	std::cout << "Silence" << std::endl;
}