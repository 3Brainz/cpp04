#include <Character.hpp>

Character::Character()
{
	std::cout << "Character created" << std::endl
}

//Character::Character()
//{
//	std::cout << Character created << std::endl
//}

Character::~Character()
{
}

Character::Character(Character const &toCopy)
{
}

Character &	Character::operator = (const Character & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const Character &Character)
{
	return (stream);
}
