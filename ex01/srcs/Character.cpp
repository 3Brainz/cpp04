#include <Character.hpp>

Character::Character() : _name("Clone"), _AP(40), _weapon(NULL)
{
	std::cout << _name << " Character created" << std::endl;
}

Character::Character(std::string const & name) : _name(name), _AP(40), _weapon(NULL)
{
	// std::cout << "I'm " << _name << "Prepare to die" << std::endl;
}

Character::~Character()
{
	delete this;
}

Character::Character(Character const &toCopy) : _name(toCopy._name), _AP(toCopy._AP)
{
	std::cout << _name << std::endl;
}

Character &	Character::operator = (const Character & toCopy)
{
	if (this != &toCopy)
	{
		_name = toCopy._name;
		_AP = toCopy._AP;
		_weapon = toCopy._weapon;
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const Character &character)
{

	stream << character.getName() << " has " << character.getAP() << " AP ";
	if (character.getWeapon())
		stream << "and wields a " << character.getWeapon()->getName();
	else
		stream << "and is unarmed";
	stream << std::endl;
	return (stream);
}

/*getters*/

std::string  	Character::getName() const
{
	return (_name);
}

int				Character::getAP() const
{
	return (_AP);
}

AWeapon			*Character::getWeapon() const
{
	return(_weapon);
}

/*funcs*/

void			Character::recoverAP()
{
	if (_AP + 10 >= 40)
		_AP = 40;
	else
		_AP += 10;
}

void			Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void			Character::attack(Enemy *enemy)
{
	if (!_weapon)
		return ;
	if (_AP >= _weapon->getAPCost())
	{
		enemy->takeDamage(_weapon->getDamage());
		_AP -= _weapon->getAPCost();
	}
}