#include <Enemy.hpp>

Enemy::Enemy()
{
	std::cout << "Enemy created" << std::endl
}

//Enemy::Enemy()
//{
//	std::cout << Enemy created << std::endl
//}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const &toCopy)
{
}

Enemy &	Enemy::operator = (const Enemy & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const Enemy &Enemy)
{
	return (stream);
}
