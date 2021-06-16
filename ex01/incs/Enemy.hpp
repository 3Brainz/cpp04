#pragma once
#include <iostream>

class Enemy
{
public:
	Enemy();
	Enemy(int hp, std::string type);
	Enemy(Enemy const &toCopy);
	virtual ~Enemy();
	Enemy &	operator = (const Enemy & toCopy);
	/*getters*/
	std::string const getType() const;
    int getHP() const;
	/*funcs*/
	virtual	void 	takeDamage(int dmg);

protected:
	int				_hp;
	std::string		_type;
private:

};

std::ostream & operator << (std::ostream & stream, const Enemy &Enemy);
