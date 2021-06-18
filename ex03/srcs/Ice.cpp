#include <Ice.hpp>

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
	// delete (this);
}

Ice::Ice(Ice const &toCopy) : AMateria(toCopy)
{
}

Ice &	Ice::operator = (const Ice & toCopy)
{
	AMateria::operator=(toCopy);
	return (*this);
}

AMateria*		Ice::clone() const
{
	Ice		*ret;
	ret = new Ice(*this);
	return (ret);
}

void			Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " <<target.getName() << " *" << std::endl;
}
