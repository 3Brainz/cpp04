#include <RadScorpion.hpp>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &toCopy) : Enemy(toCopy)
{
}

RadScorpion &	RadScorpion::operator = (const RadScorpion & toCopy)
{
	Enemy::operator = (toCopy);
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const RadScorpion &radScorpion)
{
	stream << "BAGJAERAEKFEAGJM" << "SAFGDSFA" << radScorpion.getHP() << std::endl;
	return (stream);
}
