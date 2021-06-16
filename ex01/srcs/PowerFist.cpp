#include <PowerFist.hpp>

PowerFist::PowerFist() : AWeapon("Power fist", 8, 50)
{
	// std::cout << "PowerFist created" << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << this->getName() << "dismissed" << std::endl;
}

PowerFist::PowerFist(PowerFist const &toCopy) : AWeapon(toCopy)
{
	std::cout << getName() << "copied" << std::endl;
}

PowerFist &	PowerFist::operator = (const PowerFist & toCopy)
{
	AWeapon::operator = (toCopy);
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const PowerFist &powerFist)
{
	stream << "hi i'm " << powerFist.getName() << " the plasma rifle" << std::endl;
	return (stream);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}