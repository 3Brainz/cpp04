#include <Enemy.hpp>

Enemy::Enemy() : _hp(0), _type("generic")
{
	// std::cout << "Enemy created" << std::endl;
}

Enemy::Enemy(int hp, std::string type) : _hp(hp), _type(type)
{
	// std::cout << "Enemy created" << std::endl;
}

Enemy::~Enemy()
{
	// std::cout << "Enemy destroyed" << std::endl;
	delete this;
}

Enemy::Enemy(Enemy const &toCopy) : _hp(toCopy._hp), _type(toCopy._type) 
{
	std::cout << _type << " Success in copy process" << std::endl;
}

Enemy &	Enemy::operator = (const Enemy & toCopy)
{
	if (this != &toCopy)
	{
		_hp = toCopy._hp;
		_type = toCopy._type;
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const Enemy &enemy)
{
	stream << "hi I'm " << enemy.getType() << std::endl;
	return (stream);
}

/*getters*/

std::string const Enemy::getType() const
{
	return (_type);
}

int Enemy::getHP() const
{
	return(_hp);
}

/*funcs*/

void	Enemy::takeDamage(int dmg)
{
	if (_hp == 0)
		return ;
	if (_hp - dmg <= 0)
		_hp = 0;
	else
		_hp = _hp - dmg;
}
