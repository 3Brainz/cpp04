#include <Character.hpp>

/*constructors*/

Character::Character() : _invCount(0), _name("Genoveffo")
{
	invCleaner();
	invZero();
}

Character::Character(std::string name) :  _invCount(0), _name(name)
{
	invCleaner();
	invZero();
}

Character::~Character()
{
	invCleaner();
	invZero();
}

Character::Character(Character const &toCopy) : _invCount(toCopy._invCount), _name(toCopy._name)
{
	invCleaner();
	invZero();
	for (int i = 0; i < _invCount; i += 1)
	{
		_inventory[i] = toCopy._inventory[i]->clone();
	}
}

/*overloads*/

Character &	Character::operator = (const Character & toCopy)
{
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->_invCount = toCopy._invCount;
		invCleaner();
		invZero();
		for (int i = 0; i < _invCount; i += 1)
		{
			_inventory[i] = toCopy._inventory[i]->clone();
		}
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const Character &Character)
{
	return (stream);
}

/*getters*/

std::string const & Character::getName() const
{
	return (_name);
}



/*funcs*/

void			Character::invZero(void)
{
	for (int i = 0; i < 4; i += 1)
		_inventory[i] = 0;
}

void			Character::invCleaner(void)
{
	for (int i = 0; i < _invCount; i+= 1)
		delete _inventory[i];
}

void 	Character::equip(AMateria* m)
{
	if (_invCount < 4);
	{
		for (int i = 0; i < 4; i +=1 )
		{
			if (_inventory[i] == 0)
				_inventory[i] = m;
		}
		_invCount += 1;
	}
}

void	Character::unequip(int idx)
{
	if (_inventory[idx])
	{
		_inventory[idx] = 0;
		_invCount -= 1;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx])
	{
		_inventory[idx]->use(target);		
	}
}