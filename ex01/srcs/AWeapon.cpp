#include <AWeapon.hpp>

AWeapon::AWeapon() : _name("arma"), _atkDamage(0), _APCost(0)
{
	// std::cout << "StdWeapon created" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _atkDamage(damage), _APCost(apcost)
{
	// std::cout << _name << " weapon ready to deal " << _atkDamage << "damage" << std::endl; 
}

AWeapon::~AWeapon()
{
	// std::cout << _name << " has been dismissed" << std::endl;
}

AWeapon::AWeapon(AWeapon const &toCopy) : _name(toCopy._name), _atkDamage(toCopy._atkDamage), _APCost(toCopy._APCost)
{
	// std::cout << _name << " copied with success" << std::endl;
}

AWeapon &	AWeapon::operator = (const AWeapon & toCopy)
{
	if (this != &toCopy)
	{
		_name = toCopy._name;
		_atkDamage = toCopy._atkDamage;
		_APCost = toCopy._APCost;
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const AWeapon &weapon)
{
	stream << "this is : " << weapon.getName() << " ready" << std::endl;
	return (stream);
}

/*getters*/

std::string	const	AWeapon::getName() const
{
	return (_name);
}

int 				AWeapon::getAPCost(void) const
{
	return (_APCost);
}
int 				AWeapon::getDamage(void) const
{
	return (_atkDamage);
}

/*funcs*/

void				AWeapon::attack() const
{
}