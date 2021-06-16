#include <SuperMutant.hpp>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &toCopy) : Enemy(toCopy)
{
}

SuperMutant &	SuperMutant::operator = (const SuperMutant & toCopy)
{
	Enemy::operator = (toCopy);
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const SuperMutant &superMutant)
{
	stream << "I'm " << superMutant.getType() << " and me " << superMutant.getHP() << " life" << std::endl;
	return (stream);
}

/*funcs*/

void		SuperMutant::takeDamage(int dmg)
{
	if (dmg - 3 <= 0)
		dmg = 0;
	else
		dmg = dmg - 3;
	if (_hp == 0)
		return ;
	if (_hp - dmg <= 0)
		_hp = 0;
	else
		_hp = _hp - dmg;
}
