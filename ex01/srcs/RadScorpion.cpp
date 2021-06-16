#include <RadScorpion.hpp>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
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

void	RadScorpion::takeDamage(int dmg)
{
	if (_hp == 0)
		return ;
	if (_hp - dmg <= 0)
	{
		_hp = 0;
		std::cout << "* SPROTCH *" << std::endl;
	}
	else
		_hp = _hp - dmg;
}