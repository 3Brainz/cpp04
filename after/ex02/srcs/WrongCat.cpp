#include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
}

WrongCat::WrongCat(WrongCat const &toCopy)
{
	_type = toCopy.getType();
}

WrongCat &	WrongCat::operator = (const WrongCat & toCopy)
{
	if (this != &toCopy)
	{
		WrongAnimal::operator = (toCopy);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << getType() << " no more maionaise" << std::endl;
}

/*getters*/
/*methods*/
