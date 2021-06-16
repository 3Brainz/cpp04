#include <PlasmaRifle.hpp>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma rifle", 5, 21)
{
	// std::cout << "PlasmaRifle created" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
	// std::cout << this->getName() << "dismissed" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &toCopy) : AWeapon(toCopy)
{
}

PlasmaRifle &	PlasmaRifle::operator = (const PlasmaRifle & toCopy)
{
	AWeapon::operator = (toCopy);
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const PlasmaRifle &plasmaRifle)
{
	stream << "hi i'm " << plasmaRifle.getName() << " the plasma rifle" << std::endl;
	return (stream);
}

void	attack()
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}